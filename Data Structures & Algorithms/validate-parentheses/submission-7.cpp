#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        vector<char> v;

        for (char c : s) {

            if (c == '(') {
                v.push_back(')');
                continue;
            } else if (c == '{') {
                v.push_back('}');
                continue;
            } else if (c == '[') {
                v.push_back(']');
                continue;
            }

            if (v.empty() || v.back() != c) {
                return false;
            }

            v.pop_back();

        }

        return v.empty();

    }
};
