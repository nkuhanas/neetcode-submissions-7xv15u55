class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int lowestPrice = prices[0];
        int highestProfit = 0;

        for (int price : prices) {

            lowestPrice = min(lowestPrice, price);
            highestProfit = max(highestProfit, price - lowestPrice);

        }

        return highestProfit;

    }
};
