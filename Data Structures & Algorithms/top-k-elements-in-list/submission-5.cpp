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

        for (int i = nums.size(); i >= 1; --i) {

            for (int count : buckets[i]) {

                result.push_back(count);

                if (result.size() == k){
                    return result;
                }

            }

        }

    }
};
