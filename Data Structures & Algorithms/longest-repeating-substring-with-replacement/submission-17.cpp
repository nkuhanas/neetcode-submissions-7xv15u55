#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        
        // so we have a sliding window
        // i can replace up to k characters
        // i assume the k characters dont have to be consecutive
        // basically we keep our window running and have to spend/reintroduce k characters as we go
        
        // if we change target characters, we should shrink the left cursor to match
        // this is an instance of just tracking the highest, therefore we dont need too much state

        // we can immediately replenish our replacements upon changing target characters

        const int n = s.size();

        char target = s[0];

        int replacements = k;

        int best = 0;
        int current = 0;

        for (int x = 0; x < n; ++x) {

            if (s[x] == target) {

                ++current;
                best = max(best, current);
                continue;

            } else if (replacements > 0) {

                ++current;
                --replacements;
                best = max(best, current);
                continue;

            }

            // our current character doesn't match and we're out of replacements.

            int l = x;
            current = 0;

            target = s[x];
            replacements = k;

            while (l >= 0 && (s[l] == target || replacements > 0)) {

                if (s[l] != target) {

                    --replacements;

                }

                --l;
                ++current;
                best = max(best, current);

            }

        }

        return best;

    }
};
