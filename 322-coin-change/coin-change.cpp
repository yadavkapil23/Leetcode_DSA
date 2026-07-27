class Solution {
public:
    int f(vector<int>& coins, int n, int amount, vector<vector<int>>& dp) {
        if (amount == 0) return 0;

        if (n == 0) {
            if (amount % coins[0] == 0) return amount / coins[0];
            else return INT_MAX;
        }

        if (dp[n][amount] != -1) return dp[n][amount];  

        int notTake = f(coins, n - 1, amount, dp);

        int take = INT_MAX;
        if (coins[n] <= amount) {
            int mincoinneededtofill = f(coins, n, amount - coins[n], dp);
            if (mincoinneededtofill != INT_MAX) {
                take = 1 + mincoinneededtofill;
            }
        }

        return dp[n][amount] = min(take, notTake);  
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        int result = f(coins, n - 1, amount, dp);
        if (result == INT_MAX) return -1;
        return result;
    }
};