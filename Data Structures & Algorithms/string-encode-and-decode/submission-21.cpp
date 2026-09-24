#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;

        for (const string& str : strs) {

            encoded += to_string(static_cast<int>(str.size())) + "-" + str;

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> result;

        int cursor = 0;
        int size = static_cast<int>(s.size());

        while (cursor < size) {

            string captureStr;

            while (s[cursor] != '-') {
                captureStr += s[cursor];
                ++cursor;
            }

            ++cursor;

            int captureSize = stoi(captureStr);

            result.push_back(s.substr(cursor, captureSize));

            cursor += captureSize;

        }

        return result;

    }
};
