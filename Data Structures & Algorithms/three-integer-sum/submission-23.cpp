#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int size = static_cast<int>(nums.size());

        vector<vector<int>> triplets;

        for (int i = 0; i < size; ++i) {

            // skip known anchors
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int l = i+1;
            int r = size-1;

            while (l < r) {

                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0) {

                    triplets.push_back(vector<int>{ nums[i], nums[l], nums[r] });
                    ++l;
                    --r;

                    while (l < r && nums[l-1] == nums[l]) {
                        ++l;
                    }

                    while (l < r && nums[r+1] == nums[r]) {
                        --r;
                    }

                } else if (sum > 0) {

                    --r;

                } else {

                    ++l;

                }

            }

        }

        return triplets;

    }
};
