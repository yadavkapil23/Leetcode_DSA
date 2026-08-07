class Solution {
public:
    int dynamic(vector<int> &piles,vector<vector<int>> &dp,int m,int n){
        if (m > n)
            return 0;

        if (m == n)
            return piles[m];

        if(dp[m][n] != -1){
            return dp[m][n];
        }

        int left = piles[m] - dynamic(piles,dp,m+1,n);
        int right = piles[n] - dynamic(piles,dp,m,n-1);

        return dp[m][n] = max(left,right);
    }
   bool stoneGame(vector<int>& piles) {
    int n = piles.size();
    vector<vector<int>> dp(n, vector<int>(n,-1));
    return dynamic(piles, dp, 0, n - 1);
}
};