#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int size = static_cast<int>(nums.size());

        vector<vector<int>> triplets;

        for (int i = 0; i < size; ++i) {

            if (i > 0 && nums[i-1] == nums[i]) {
                continue;
            }

            if (nums[i] > 0) {
                break;
            }

            int l = i+1;
            int r = size-1;

            while (l < r) {

                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0) {

                    triplets.push_back(vector<int>{ nums[i], nums[l], nums[r] });

                    ++l;
                    --r;

                    while (l < r && nums[l] == nums[l-1]) {
                        ++l;
                    }

                    while (l < r && nums[r] == nums[r+1]) {
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
