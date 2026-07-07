#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> results;
        unordered_map<string, vector<string>> anagrams;

        for (const string& str : strs) {

            string idx = str;

            sort(idx.begin(), idx.end());

            anagrams[idx].push_back(str);

        }

        for (const auto& [_, group] : anagrams) {

            results.push_back(group);

        }

        return results;

    }
};
