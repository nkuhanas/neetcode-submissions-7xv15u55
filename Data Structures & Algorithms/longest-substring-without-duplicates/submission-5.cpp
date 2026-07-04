#include <bits/stdc++.h>
using namespace std;

#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // cant say ive ever coded a sliding window
        // i suppose, ill stop tracking state because apparently
        // i dont need to

        int longest = 0;

        // but uh how would i keep track of state without atleast one object
        // so i guess ill use a string

        const int n = s.size();

        string sub;

        int cursor = 0;

        while (cursor < n) {

            while (cursor < n && sub.find(s[cursor]) == string::npos) {

                sub += s[cursor];
                longest = max(longest, static_cast<int>(sub.size()));
                ++cursor;

            }

            while (sub.find(s[cursor]) != string::npos) {

                sub.erase(0, 1);

            }

        }

        return longest;

    }
};
