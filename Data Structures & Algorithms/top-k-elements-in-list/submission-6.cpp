#include <bits/stdc++.h>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

        for (int num : nums) {
            ++freq[num];
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for (const auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }

        vector<int> result;

        for (int i = buckets.size()-1; i >= 1; --i) {

            for (int j : buckets[i]) {

                if (result.size() >= k) {
                    return result;
                }

                result.push_back(j);

            }

        }

        return result;

    }
};
