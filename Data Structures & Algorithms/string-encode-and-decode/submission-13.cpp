class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;

        for (const string& str : strs) {

            encoded += std::to_string(str.size());
            encoded += '-';
            encoded += str;

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> captures;

        int cursor = 0;

        while (cursor < s.size()) {
            
            // this is a clone rather than a ptr because we didnt use &
            // it is also mutable because no const

            int start = cursor;

            // begin capturing str length, go until delimiter reached

            while (s[cursor] != '-') {

                ++cursor;

            }

            // our length can be derived from the starting position to the current position
            // thus take a substr slice

            int sizeLen = cursor-start;
            int captureLen = std::stoi(s.substr(start, sizeLen));

            // skip our delimiter

            ++cursor;

            // add our capture to the vector

            captures.push_back(s.substr(cursor, captureLen));

            // move our cursor forward

            cursor += captureLen;

        }

        return captures;

    }
};
