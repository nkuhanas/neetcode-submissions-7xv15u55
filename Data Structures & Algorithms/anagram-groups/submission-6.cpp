#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> buckets;

        for (const string& str : strs) {

            string idx = str;
            
            sort(idx.begin(), idx.end());

            buckets[idx].push_back(str);

        }

        vector<vector<string>> results;

        for (const auto& [ idx, bucket ] : buckets) {

            results.push_back(bucket);

        }

        return results;

    }
};
