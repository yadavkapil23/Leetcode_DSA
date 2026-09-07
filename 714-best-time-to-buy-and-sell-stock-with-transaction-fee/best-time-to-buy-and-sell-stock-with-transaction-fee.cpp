class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int aheadbuy = 0;
        int aheadnotbuy = 0;
        int n = prices.size();

        for(int ind = n-1 ; ind>=0 ; ind--){
            int currnotbuy  = max(prices[ind] - fee + aheadbuy , 0 + aheadnotbuy);

            int currbuy = max(-prices[ind] + aheadnotbuy,0 + aheadbuy);

            aheadbuy = currbuy;
            aheadnotbuy = currnotbuy;
        }

        return aheadbuy;
    }
};