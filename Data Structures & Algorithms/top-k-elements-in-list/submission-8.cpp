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

        vector<int> results;

        for (int i = buckets.size() - 1; i >= 0; --i) {

            for (int j = 0; j < buckets[i].size(); ++j) {

                results.push_back(buckets[i][j]);

                if (results.size() >= k) {
                    return results;
                }

            }
            
        }

        return results;

    }
};
