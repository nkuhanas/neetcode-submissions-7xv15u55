#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        
        int size = static_cast<int>(height.size());

        int l = 0;
        int r = size-1;

        int leftMax = 0;
        int rightMax = 0;

        int total = 0;

        while (l <= r) {

            leftMax = max(leftMax, height[l]);
            rightMax = max(rightMax, height[r]);

            if (leftMax <= rightMax) {

                total += leftMax - height[l];
                ++l;

            } else {

                total += rightMax - height[r];
                --r;

            }

        }

        return total;

    }

};
