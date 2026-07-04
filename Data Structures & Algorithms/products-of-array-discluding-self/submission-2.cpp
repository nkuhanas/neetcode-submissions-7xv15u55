#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // O(n) time would be kind of hard
        // i dont see how you could do this in one pass.
        // unless O(n) just means theres no nested loops.

        vector<int> results;

        vector<int> forwardProducts;
        vector<int> reverseProducts;

        int forwardMult = 1;
        int reverseMult = 1;

        for (int i = 0; i < nums.size(); ++i) {

            forwardMult *= nums[i];

            forwardProducts.push_back(forwardMult);

        }

        for (int i = nums.size()-1; i >= 0; --i) {

            reverseMult *= nums[i];

            reverseProducts.push_back(reverseMult);

        }

        std::reverse(reverseProducts.begin(), reverseProducts.end());

        for (int i=0; i<nums.size(); ++i) {

            if (i == 0) {

                results.push_back(reverseProducts[1]);

            } else if (i == nums.size()-1) {

                results.push_back(forwardProducts[forwardProducts.size() - 2]);

            } else {

                std::cout << forwardProducts[i - 1] << " * " << reverseProducts[i + 1] << std::endl;

                results.push_back(forwardProducts[i - 1] * reverseProducts[i + 1]);
            
            }

        }

        return results;

    }
};
