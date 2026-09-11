class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n <= 1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        int total = 0;

        for(int root = 1 ; root<=n ; root++){
            int left = solve(root-1,dp);
            int right = solve(n-root,dp);

            total += (left * right);
        }

        return dp[n] = total;
    }
    int numTrees(int n) {
       vector<int> dp(n+1,-1);
       return solve(n,dp);
    }
};