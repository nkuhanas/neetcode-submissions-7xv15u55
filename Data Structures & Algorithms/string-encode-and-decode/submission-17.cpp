#include <bits/stdc++.h>

class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;

        for (const string& str : strs) {

            encoded += (to_string(str.size()) + '-' + str);

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> strs;

        size_t cursor = 0;

        while (cursor < s.size()) {

            string captureStr;

            while (s[cursor] != '-') {

                captureStr += s[cursor];
                ++cursor;

            }

            ++cursor; // skip delimiter

            int captureSize = stoi(captureStr);

            strs.push_back(s.substr(cursor, captureSize));

            cursor += captureSize;

        }

        return strs;
    }
};
