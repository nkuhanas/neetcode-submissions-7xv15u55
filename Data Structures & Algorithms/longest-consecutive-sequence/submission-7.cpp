#include <vector>
#include <unordered_map>
#include <algorithm>
#include <print>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // lets create a hashmap that links a target number to its corresponding int vector
        // if target is hit, append it to the vector, remove the existing target index
        // add the next target index

        if (nums.size() == 0) {
            return 0;
        }

        std::sort(nums.begin(), nums.end());

        unordered_map<int, vector<int>> sequenceTargets;

        int highest = 1;

        for (int num : nums) {

            auto it = sequenceTargets.find(num);

            vector<int>& v1 = sequenceTargets[num+1];

            if (it != sequenceTargets.end()) {

                vector<int>& v2 = it->second;

                for (int& counter : v2) {

                    ++counter;

                    if (counter > highest) {

                        highest = counter;

                    }

                }

                v1.reserve(v1.size() + v2.size());
                v1.insert(v1.end(), v2.begin(), v2.end());
                v2.clear();

            }

            v1.push_back(1);

        }

        return highest;

    }
};
