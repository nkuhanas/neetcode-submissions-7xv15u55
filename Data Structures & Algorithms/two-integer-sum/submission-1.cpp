#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> targets;

        for (int i=0; i<nums.size(); ++i) {

            int num = nums[i];
            auto it = targets.find(num);

            if (it != targets.end()) {

                return { it->second, i };
                
            }

            targets[target-num] = i;

        }

        return {0, 0};

    }
};
