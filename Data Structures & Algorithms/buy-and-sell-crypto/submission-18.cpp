#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int lowestPrice = prices[0];
        int maxProfit = 0;

        for (int num : prices) {

            maxProfit = max(maxProfit, num - lowestPrice);
            lowestPrice = min(lowestPrice, num);

        }

        return maxProfit;

    }
};
