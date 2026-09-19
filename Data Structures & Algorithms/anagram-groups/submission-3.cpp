#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mapping;
        vector<vector<string>> groups;

        for (string str : strs) {

            string idx = str;

            sort(idx.begin(), idx.end());

            mapping[idx].push_back(str);

        }

        for (const auto& [_, vec] : mapping) {

            groups.push_back(vec);

        }

        return groups;

    }
};
