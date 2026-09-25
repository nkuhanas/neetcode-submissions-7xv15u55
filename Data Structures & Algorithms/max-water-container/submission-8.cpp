#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int result = 0;

        int l = 0;
        int r = static_cast<int>(heights.size())-1;

        while (l < r) {

            result = max(result, min(heights[r], heights[l]) * (r-l));

            if (heights[r] > heights[l]) {
                ++l;
            } else {
                --r;
            }

        }

        return result;

    }
};
