#include <bits/stdc++.h>

using namespace std;

#include <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int best = 0;

        sort(nums.begin(), nums.end());

        unordered_set<int> seen(nums.begin(), nums.end());

        for (int num : seen) {

            // if one below this number exists, we dont use this as an anchor to start counting
            if (seen.find(num - 1) != seen.end()) {

                continue;

            }

            int current = num;
            int length = 1;

            // while there is an existing increment
            while (seen.find(current + 1) != seen.end()) {

                ++current;
                ++length;

            }

            best = max(best, length);

        }

        return best;

    }
};
