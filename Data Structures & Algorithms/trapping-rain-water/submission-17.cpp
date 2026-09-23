#include <bits/stdc++.h>

class Solution {
public:

    int trap(vector<int>& height) {
        
        int size = static_cast<int>(height.size());

        if (size <= 1) {
            return 0;
        }

        stack<int> anchors;
        anchors.push(0);

        int total = 0;

        while (!anchors.empty()) {

            int l = anchors.top();
            int h = height[l];
            bool capture = false;

            anchors.pop();

            while (h > 0 && capture == false) {

                int sub = 0;
                int r = l+1;

                while (r < size && capture == false) {

                    if (height[r] < h) {

                        sub += height[r];
                        ++r;

                    } else {

                        // we just hit a new anchors

                        anchors.push(r);
                        total += (min(h, height[r]) * (r-l-1) - sub);
                        capture = true;

                    }

                }

                --h;

            }
            

            if (capture == false && l < size-1) {

                anchors.push(l+1);

            }
            
        }

        return total;

    }
};
