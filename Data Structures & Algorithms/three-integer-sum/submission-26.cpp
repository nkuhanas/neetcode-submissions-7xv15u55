#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        vector<vector<int>> triplets;

        for (int i = 0; i < nums.size(); ++i) {

            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            if (nums[i] > 0) {
                continue;
            }

            int l = i+1;
            int r = static_cast<int>(nums.size())-1;

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
