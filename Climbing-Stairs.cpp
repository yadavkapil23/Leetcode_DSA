1class Solution {
2public:
3vector<int> dp;
4    int solve(int n,vector<int> &dp){
5        if(n == 0 || n==1){
6            return 1;
7        }
8
9        if(dp[n] != -1){
10            return dp[n];
11        }
12
13        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
14
15        //let n = 4.
16        // To reach step 4, think about the last move:
17
18        // If last move was 1 step, you came from step 3
19        // If last move was 2 steps, you came from step 2
20        
21    }
22    int climbStairs(int n) {
23        dp.resize(n+1,-1);
24        return solve(n,dp);
25    }
26};