#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // alright so realistically, we'd want to buy low sell high

        int lowestPrice = prices[0];
        int highestPrice = prices[0];
        int highestProfit = 0;

        for (int price : prices) {

            if (price < lowestPrice) {

                lowestPrice = price;
                highestPrice = price;

            }

            if (price > highestPrice) {

                highestPrice = price;
                highestProfit = max(highestProfit, highestPrice - lowestPrice);

            }

        }

        return highestProfit;

    }
};
