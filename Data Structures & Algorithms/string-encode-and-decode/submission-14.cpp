#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;

        for (const string& str: strs) {

            encoded += to_string(str.size());
            encoded += "-";
            encoded += str;

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> results;

        int r = 0;

        while (r < s.size()) {

            int l = r;

            while (s[r] != '-') {
                ++r;
            }

            int captureLen = stoi(s.substr(l, r-l));

            ++r;

            results.push_back(s.substr(r, captureLen));

            r += captureLen;

        }

        return results;

    }
};
