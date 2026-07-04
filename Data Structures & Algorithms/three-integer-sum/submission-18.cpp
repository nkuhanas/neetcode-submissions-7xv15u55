#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        const int n = nums.size();

        vector<vector<int>> triplets;

        for (int x = 0; x < n - 2; ++x) {

            if (x > 0 && nums[x-1] == nums[x]) {
                continue;
            }

            int l = x+1;
            int r = n-1;

            while (l < r) {

                int sum = nums[l] + nums[r] + nums[x];

                if (sum == 0) {

                    triplets.push_back(vector<int> { nums[l], nums[r], nums[x] } );

                    ++l;
                    --r;

                    while (l < r && nums[l] == nums[l - 1]) {
                        ++l;
                    }

                    while (l < r && nums[r] == nums[r + 1]) {

                        --r;

                    }

                } else if (sum < 0) {

                    ++l;

                } else {

                    --r;

                }

            }

        }

        return triplets;

    }
};
