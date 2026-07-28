class Solution {
public:
    int no(int n,vector<int> &dp){
        if(n==2 || n==1){
            return 1;
        }
        if(n<=0){
            return 0;
        }

        if(n == 3){
            return 2;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = no(n-1,dp) + no(n-2,dp) + no(n-3,dp);
    }
    int tribonacci(int n){
        vector<int> dp(n+1,-1);
        return no(n,dp);
    }
};