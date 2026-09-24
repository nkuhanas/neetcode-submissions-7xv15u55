#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> forward(nums.size(), 1);

        for (int i = 0; i < nums.size()-1; ++i) {

            forward[i+1] = forward[i] * nums[i];

        }

        int reverse = 1;

        for (int j = nums.size()-1; j >=0; --j) {

            forward[j] *= reverse;
            reverse *= nums[j];

        }

        return forward;

    }
};
