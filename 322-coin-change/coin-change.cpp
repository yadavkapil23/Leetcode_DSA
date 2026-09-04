class Solution {
public:
    int solve(vector<int> &coins,int amount,int n,vector<vector<int>> &dp){
        if(amount == 0){
            return 0;
        }

        if(amount < 0){
            return 1e9;
        }

        if(n < 0){
            return 1e9;
        }

        if(dp[n][amount] != -1){
            return dp[n][amount];
        }

        int nottake = solve(coins,amount,n-1,dp);

        int take = 1e9;
        if(amount >= coins[n]){
            take = 1 + solve(coins,amount-coins[n],n,dp);
        }

        dp[n][amount] = min(take,nottake);

        return dp[n][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(coins.size(), vector<int> (amount+1,-1));
        int ans = solve(coins,amount,n-1,dp);
        if(ans == 1e9){
            return -1;
        }
        return ans;
    }
};