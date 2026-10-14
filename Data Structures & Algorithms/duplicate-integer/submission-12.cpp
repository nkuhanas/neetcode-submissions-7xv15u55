#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int n : nums) {

            auto it = seen.find(n);

            if (it != seen.end()) {

                return true;

            }

            seen.insert(n);

        }

        return false;

    }
};