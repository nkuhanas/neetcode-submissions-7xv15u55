#include <unordered_map>
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> frequenciesMap;

        for (const int& num : nums) {

            ++frequenciesMap[num];

        }

        vector<vector<int>> pairedFrequent;

        pairedFrequent.reserve(frequenciesMap.size());

        for (const auto& pair : frequenciesMap) {

            pairedFrequent.push_back( vector<int> { pair.second, pair.first } );

        }

        std::sort(pairedFrequent.begin(), pairedFrequent.end(), [](vector<int> a, vector<int> b) {

            return a[0] > b[0];

        });

        vector<int> topK;
        topK.reserve(k);

        for (int i=0; i<k; ++i) {

            topK.push_back(pairedFrequent[i][1]);

        }

        return topK;

    }
};
