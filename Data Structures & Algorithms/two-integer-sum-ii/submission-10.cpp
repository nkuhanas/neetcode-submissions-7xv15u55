#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l = 0;
        int r = static_cast<int>(numbers.size())-1;

        while (l < r) {

            int sum = numbers[l] + numbers[r];

            if (sum == target) {
                return vector<int> {l+1, r+1};
            } 
            
            if (sum > target) {
                --r;
            } else {
                ++l;
            }

        }

        return vector<int> {1, 2};

    }
};
