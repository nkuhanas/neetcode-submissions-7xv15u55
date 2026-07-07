#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
    
        if (s.size() != t.size()) {

            return false;

        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int x = 0; x < s.size(); ++x) {

            if (s[x] != t[x]) {

                return false;

            }

        }

        return true;

    }
};
