#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // alrighty, we want every product except self
        // this means keeping a running multiplier
        // we should be keeping both a suffix and prefix multiplier

        // we can do this by first doing a pass on each element for its prefix multiplier
        // then do a second pass for each suffix multiplier

        const int n = nums.size();

        vector<int> results(n, 1);

        int prefix = 1;
        int suffix = 1;

        for (int x = 1; x < n; ++x) {

            prefix *= nums[x-1];
            results[x] = prefix;

        }

        for (int x = n-2; x >= 0; --x) {

            suffix *= nums[x+1];
            results[x] *= suffix;

        }

        return results;

    }
};
