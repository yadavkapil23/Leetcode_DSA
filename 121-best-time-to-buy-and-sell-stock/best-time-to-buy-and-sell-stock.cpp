class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = prices[0];
        int minprice = INT_MAX;
        int maxprofit = INT_MIN;
        int profit = 0;

        int n = prices.size();
        for(int i=0 ; i<n ; i++){
        minprice = min(minprice,prices[i]);

           profit = prices[i] - minprice;

        maxprofit = max(profit,maxprofit);
        }

        return maxprofit;
    }
};