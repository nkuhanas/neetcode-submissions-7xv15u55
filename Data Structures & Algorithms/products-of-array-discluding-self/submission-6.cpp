#include <bits/stdc++.h>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> forward(nums.size(), 1);
        vector<int> backward(nums.size(), 1);

        // i know its something with two passes

        for (int i = 1; i < nums.size(); ++i) {

            forward[i] = forward[i-1] * nums[i-1];

        }

        int backwards = 1;

        for (int j = nums.size()-1; j >= 0; --j) {

            // if (j >= 1) {
                // backward[i] = backward[i+1]
                // forward[j-1] *= nums[j];
            // }
            int p = nums[j];
            nums[j] = forward[j] * backwards;
            backwards *= p;

            // 1 1 12 8

        }

        return nums;

    }
};
