class Solution {
public:
    int stairs(vector<int> &cost,vector<int> &dp,int n){
        if(n == 0){
            return cost[0];
        }

        if(n==1){
            return cost[1];
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int one = cost[n] + stairs(cost,dp,n-1);
        int two = cost[n] + stairs(cost,dp,n-2);

       dp[n] = min(one,two);

       return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);

       return min(stairs(cost,dp,n-1),stairs(cost,dp,n-2));
    }
};