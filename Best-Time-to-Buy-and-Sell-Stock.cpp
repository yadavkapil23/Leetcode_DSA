1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minprice = INT_MAX;
5        int profit;
6        int maxprofit = INT_MIN;
7        int n = prices.size();
8        for(int i=0 ; i<n ; i++){
9            if(prices[i] < minprice){
10                minprice = prices[i];
11            }
12
13            profit = prices[i]-minprice;
14            maxprofit = max(profit,maxprofit);
15        }
16
17        return maxprofit;
18    }
19};