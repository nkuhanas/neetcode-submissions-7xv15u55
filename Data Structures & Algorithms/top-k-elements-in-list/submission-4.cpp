#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freqMap;

        for (int num : nums) {

            ++freqMap[num];

        }

        vector<pair<int, int>> pairs;
        
        pairs.reserve(freqMap.size());

        for (const auto& pair : freqMap) {

            pairs.push_back(pair);

        }

        sort(pairs.begin(), pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {

            return a.second > b.second;

        });

        vector<int> results;

        results.reserve(k);

        for (int x = 0; x < k; ++x) {

            results.push_back(pairs[x].first);

        }

        return results;

    }
};
