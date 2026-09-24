#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int size = static_cast<int>(s.size());

        int l = 0;
        int r = 0;

        int longest = 0;

        unordered_map<int, int> seen;
        int lastRepeated = 0;

        while (r < size) {

            auto it = seen.find(s[r]);

            // we already have this character, move left side of the window there.
            if (it != seen.end()) {

                l = max(lastRepeated, it->second);
                lastRepeated = l;
                ++l;

            }

            longest = max(longest, r-l+1);

            seen[s[r]] = r;
            ++r;

        }

        return longest;

    }
};
