class Solution {
public:
    int fn(int n, vector<int> &dp){
        if(n==0 || n==1){
            return 1;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int first = fn(n-1,dp);
        int second = fn(n-2,dp);

        return dp[n] = first + second;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return fn(n,dp);
    }
};