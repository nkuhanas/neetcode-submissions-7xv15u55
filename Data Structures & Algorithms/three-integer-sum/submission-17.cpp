#include <bits/stdc++.h>

using namespace std;

#include <algorithm>
#include <iostream>
#include <unordered_map>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        std::sort(nums.begin(), nums.end());

        vector<vector<int>> triplets;

        for (int x = 0; x < nums.size()-1; ++x) {

            if (x > 0 && nums[x] == nums[x-1]) {

                continue;

            }

            int l = x+1;
            int r = nums.size()-1;

            int target = 0 - nums[x];

            unordered_set<int> seenLefts;

            while (l < r) {

                int current = nums[l] + nums[r];

                if (seenLefts.find(nums[l]) != seenLefts.end()) {

                    ++l;
                    continue;

                }

                if (current == target) {

                    triplets.push_back(vector <int> { nums[x], nums[l], nums[r] });
                    seenLefts.insert(nums[l]);
                    ++l;
                    --r;

                } else if (current < target) {

                    ++l;

                } else {

                    --r;

                }

            }  

        }

        return triplets;

              

    }
};
