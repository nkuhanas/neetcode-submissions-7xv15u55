#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> known(nums.begin(), nums.end());

        int longest = 0;

        for (int num : nums) {

            if (known.find(num-1) != known.end()) {
                continue;
            }

            int current = 1;

            while (known.find(num+1) != known.end()) {
                ++num;
                ++current;
            }

            longest = max(longest, current);

        }

        return longest;

    }
};
