#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // alright so realistically, we'd want to buy low sell high

        int lowestPrice = prices[0];
        int highestProfit = 0;

        for (int price : prices) {

            if (price < lowestPrice) {

                lowestPrice = price;

            }

            highestProfit = max(highestProfit, price - lowestPrice);

        }

        return highestProfit;

    }
};
