#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

        for (int num : nums) {
            ++freq[num];
        }

        vector<vector<int>> buckets(static_cast<int>(nums.size())+1);

        for (const auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }

        vector<int> results;

        for (int i = buckets.size()-1; i >= 0; --i) {

            for (int j : buckets[i]) {

                results.push_back(j);

                if (results.size() >= k) {
                    return results;
                }

            }

        }

        return results;

    }
};
