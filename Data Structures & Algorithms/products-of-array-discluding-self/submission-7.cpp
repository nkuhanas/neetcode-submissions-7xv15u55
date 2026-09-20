#include <bits/stdc++.h>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> products(nums.size(), 1);

        // i know its something with two passes

        for (int i = 1; i < nums.size(); ++i) {

            products[i] = products[i-1] * nums[i-1];

        }

        int backwards = 1;

        for (int j = nums.size()-1; j >= 0; --j) {

            products[j] *= backwards;
            backwards *= nums[j];

        }

        return products;

    }
};
