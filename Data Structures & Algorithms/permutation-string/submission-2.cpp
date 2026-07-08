#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        // super awesome
        // we have two pointer and sliding window
        // as well as hashtables, so either unorderedset or unorderedmap

        // we should first convert s1 to a frequency map

        vector<int> freqMap(26, 0);

        for (char c : s1) {
            ++freqMap[c - 'a'];
        }

        string sorted = s1;
        sort(sorted.begin(), sorted.end());

        // our two pointers likely constitute our window
        // a permutation is consecutive only luckily

        int cursor = 0;

        while (cursor < s2.size() - s1.size() + 1) {

            string s = s2.substr(cursor, s1.size());

            if (freqMap[s[0] - 'a'] == 0 || freqMap[s[s1.size()-1] - 'a'] == 0) {

                ++cursor;
                continue;

            }

            sort(s.begin(), s.end());

            if (s == sorted) {

                return true;

            }

            ++cursor;


        }

        return false;
    }
};
