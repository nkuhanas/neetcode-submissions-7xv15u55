#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freqMap;

        for (int num : nums) {

            ++freqMap[num];

        }

        vector<vector<int>> buckets(nums.size()+1);

        for (const auto& [ num, count ] : freqMap) {

            buckets[count].push_back(num);

        }

        vector<int> result;

        for (int i = static_cast<int>(buckets.size())-1; i >= 0; --i) {

            for (int j : buckets[i]) {

                result.push_back(j);

                if (result.size() >= k) {
                    return result;
                }

            }

        }

        return result;

    }
    
};