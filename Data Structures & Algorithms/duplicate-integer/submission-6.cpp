#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        for (int x = 1; x < nums.size(); ++x) {

            if (nums[x] == nums[x-1]) {

                return true;

            }

        }

        return false;

    }
};