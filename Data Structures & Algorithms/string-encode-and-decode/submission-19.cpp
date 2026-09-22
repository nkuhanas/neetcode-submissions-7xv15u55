#include <bits/stdc++.h>

class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;

        for (const string& str : strs) {

            encoded += to_string(str.size()) + '-' + str;

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> results;

        int cursor = 0;
        int size = static_cast<int>(s.size());

        while (cursor < size) {

            string captureStr;

            while (s[cursor] != '-') {

                captureStr += s[cursor];
                ++cursor;

            }

            std::cout << captureStr << std::endl;

            ++cursor;

            int captureSize = stoi(captureStr);

            results.push_back(s.substr(cursor, captureSize));

            cursor += captureSize;

        }

        return results;

    }
};
