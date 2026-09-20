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

        vector<string> strs;

        int length = s.size();
        int cursor = 0;

        while (cursor < length) {

            string captureStr;

            while (s[cursor] != '-') {

                captureStr += s[cursor];
                ++cursor;

            }

            int captureSize = stoi(captureStr);

            ++cursor;

            strs.push_back(s.substr(cursor, captureSize));

            cursor += captureSize;

        }

        return strs;

    }
};
