#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <iostream>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> anagramBuckets;
        vector<vector<string>> anagrams;

        for (int i=0; i<strs.size(); ++i) {

            string str = strs[i];
            string original = str;

            std::sort(str.begin(), str.end());

            auto it = anagramBuckets.find(str);

            if (it != anagramBuckets.end()) {

                it->second.push_back(original);

            } else {

                anagramBuckets[str] = vector<string>{original};

            }

        }

        for (const auto& [_, vec] : anagramBuckets) {

            anagrams.push_back(vec);

        }

        return anagrams;

    }
};
