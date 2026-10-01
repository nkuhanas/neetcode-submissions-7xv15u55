#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        vector<char> st;

        for (char c : s) {

            if (c == '[') {
                st.push_back(']');
                continue;
            } else if (c == '(') {
                st.push_back(')');
                continue;
            } else if (c == '{') {
                st.push_back('}');
                continue;
            }

            if (st.empty() || c != st.back()) {
                return false;
            }

            st.pop_back();

        }

        return st.empty();

    }
};
