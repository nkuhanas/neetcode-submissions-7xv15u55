#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        // because two bars near the middle could effectively be 1000, 1000
        // we should just check all of them

        const int n = heights.size();
        int l = 0;
        int r = n-1;

        int highest = 0;

        while (l < r) {

            int hl = heights[l];
            int hr = heights[r];

            int height = std::min(hl, hr);
            int dist = r-l;

            highest = std::max(highest, height * dist);

            if (hl < hr) {

                ++l;

            } else {

                --r;

            }

        }

        return highest;

    }
};
