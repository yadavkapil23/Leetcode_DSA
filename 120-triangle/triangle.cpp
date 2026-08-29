class Solution {
public:
    int ans(vector<vector<int>> &triangle,vector<vector<int>> &dp,int m,int n){
        if(m == triangle.size()-1){
            return triangle[m][n];
        }

        if(dp[m][n] != INT_MAX){
            return dp[m][n];
        }

        int down = triangle[m][n] + ans(triangle,dp,m+1,n);
        int diagonal = triangle[m][n] + ans(triangle,dp,m+1,n+1);
        return dp[m][n] = min(down,diagonal);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<vector<int>> dp(m,vector<int> (n,INT_MAX));
        return ans(triangle,dp,0,0);
    }
};