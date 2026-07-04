#include <iostream>
#include <cctype>

class Solution {
public:

    string encode(vector<string>& strs) {

        // ok, maybe lets preface each string with a character count
        // on the decode function, it will capture next x character, check for a number
        // then proceed to continue capturing

        string encoded;

        for (const string& str : strs) {

            encoded += std::to_string(str.size()) + "-" + str; 

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> captures;

        int cursor = 0;

        while (cursor < s.size()) {

            string sizeStr;
            string capture;

            bool found = false;      

            for (; cursor < s.size(); ++cursor) {

                const char& c = s[cursor];

                if (std::isdigit(c)) {

                    sizeStr += c;
                    found = true;

                } else {

                    break;

                }

            }

            if (not found) {

                break;

            }

            ++cursor;

            for (int k=0; k < std::stoi(sizeStr); ++k) {

                capture += s[k + cursor];

            }

            captures.push_back(capture);
            cursor += std::stoi(sizeStr);

        }

        return captures;

    }
};
