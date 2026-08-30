class Solution {
public:
    int pathsum(vector<vector<int>> &dp,int m,int n,vector<vector<int>> &matrix){
        if(n < 0 || n >= matrix[0].size()){
            return INT_MAX/2;
        }

        if(m == 0){
            return matrix[0][n];
        }

        if(dp[m][n] != INT_MAX){
            return dp[m][n];
        }

        int leftdiag = matrix[m][n] + pathsum(dp,m-1,n-1,matrix);
        int straight = matrix[m][n] + pathsum(dp,m-1,n,matrix);
        int rightdiag = matrix[m][n] + pathsum(dp,m-1,n+1,matrix);

        return dp[m][n] = min(straight,min(leftdiag,rightdiag));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
       int m = matrix.size();
       int n = matrix[0].size();
       vector<vector<int>> dp(m,vector<int>(n,INT_MAX));

        int ans = INT_MAX;
        for (int j = 0; j < n; j++)
            ans = min(ans, pathsum(dp, m-1, j, matrix));
        return ans;

    }
};