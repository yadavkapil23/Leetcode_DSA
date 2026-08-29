class Solution {
public:
    int mins(vector<vector<int>>& grid , vector<vector<int>> &dp,int m,int n){
        if(m<0 || n<0){
            return INT_MAX;
        }

        if(m==0 && n==0){
            return grid[m][n];
        }

        if(dp[m][n] != -1){
            return dp[m][n];
        }

        long long left = (long long)grid[m][n] + (long long)mins(grid,dp,m,n-1);
        long long up = (long long)grid[m][n] + (long long)mins(grid,dp,m-1,n);

        return dp[m][n] = min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        //dp[0][0] = grid[0][0];

        return mins(grid,dp,m-1,n-1);

    }
};