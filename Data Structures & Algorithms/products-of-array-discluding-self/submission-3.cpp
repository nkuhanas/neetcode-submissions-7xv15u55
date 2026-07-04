#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // O(n) time would be kind of hard
        // i dont see how you could do this in one pass.
        // unless O(n) just means theres no nested loops.

        vector<int> results;

        vector<int> forwardProducts(nums.size());
        vector<int> reverseProducts(nums.size());

        forwardProducts[0] = 1;
        reverseProducts[nums.size()-1] = 1;

        for (int i = 1; i < nums.size(); ++i) {

            forwardProducts[i] = nums[i-1] * forwardProducts[i-1];

        }

        for (int i = nums.size()-2; i >= 0; --i) {

            reverseProducts[i] = nums[i+1] * reverseProducts[i+1];

        }

        for (int i=0; i<nums.size(); ++i) {

            results.push_back(forwardProducts[i] * reverseProducts[i]);

        }

        return results;

    }
};
