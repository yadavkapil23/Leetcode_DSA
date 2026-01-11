class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n = v.size();
        int minprice=INT_MAX;
        int maxprofit = 0;
        int profit; 
        for(int i=0 ; i<n ; i++){
            minprice = min(v[i],minprice);
            profit = v[i] - minprice;
            maxprofit = max(profit,maxprofit);
        }
        return maxprofit;
    }
};