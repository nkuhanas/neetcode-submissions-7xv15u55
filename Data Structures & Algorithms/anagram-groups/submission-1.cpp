#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> buckets;

        for (const string& str : strs) {

            string sortedStr = str;
            std::sort(sortedStr.begin(), sortedStr.end());
            
            buckets[sortedStr].push_back(str);

        }

        vector<vector<string>> anagrams;
        anagrams.reserve(buckets.size());

        for (auto& pair : buckets) {

            anagrams.push_back(pair.second);

        }

        return anagrams;

    }
};
