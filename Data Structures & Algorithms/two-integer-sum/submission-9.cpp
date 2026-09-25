#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> targets;

        for (int i = 0; i < nums.size(); ++i) {

            auto it = targets.find(nums[i]);

            if (it != targets.end()) {
                return vector<int> { it->second, i };
            }

            targets[target - nums[i]] = i;

        }

        return vector<int> { 0, 1 };

    }
};
