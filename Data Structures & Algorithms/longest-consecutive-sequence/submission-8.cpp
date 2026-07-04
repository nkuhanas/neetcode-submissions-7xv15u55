#include <algorithm>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0) {

            return 0;

        }

        std::sort(nums.begin(), nums.end());

        unordered_set<int> seen(nums.begin(), nums.end());

        int longest = 0;

        for (int num : seen) {

            if (seen.find(num - 1) != seen.end()) {

                continue;

            }

            int current = num;
            int length = 1;

            while (seen.find(current + 1) != seen.end()) {

                ++current;
                ++length;

            }

            longest = max(longest, length);

        }

        return longest;

    }
};
