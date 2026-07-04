#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);

        int l = 0;
        int best = 0;

        for (int r = 0; r < s.size(); ++r) {
            char c = s[r];

            if (lastSeen[c] >= l) {
                l = lastSeen[c] + 1;
            }

            lastSeen[c] = r;
            best = max(best, r - l + 1);
        }

        return best;
    }
};