#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> items;

        for (const auto& [num, count] : freq) {
            items.push_back({count, num});
        }

        sort(items.begin(), items.end(), greater<pair<int, int>>());

        vector<int> result;

        for (int i = 0; i < k; ++i) {
            result.push_back(items[i].second);
        }

        return result;
    }
};