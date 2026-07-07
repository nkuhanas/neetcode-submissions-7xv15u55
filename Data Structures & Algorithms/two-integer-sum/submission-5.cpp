#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> targets;

        for (int x = 0; x < nums.size(); ++x) {

            auto it = targets.find(nums[x]);

            if (it != targets.end()) {

                return vector<int> { it->second, x };

            }

            targets[target - nums[x]] = x;

        }

        return vector<int> {0, 0};

    }
};
