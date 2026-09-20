#include <bits/stdc++.h>

class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int highest = 0;

        int l = 0;
        int r = static_cast<int>(heights.size())-1;
        
        while (l < r) {

            highest = max(highest, min(heights[l], heights[r]) * (r-l));

            if (heights[l] < heights[r]) {
                ++l;
            } else if (heights[r] <= heights[l]) {
                --r;
            }

        }

        return highest;

    }
};
