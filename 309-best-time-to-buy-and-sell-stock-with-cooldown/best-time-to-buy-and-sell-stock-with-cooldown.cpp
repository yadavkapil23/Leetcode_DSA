class Solution {
public:
    int solution(int buy,int ind,vector<int> &prices,vector<vector<int>> &dp){
        if(ind >= prices.size()){
            return 0;
        }

        if(dp[ind][buy] != -1){
            return dp[ind][buy];
        }

        if(buy == 0){
            return dp[ind][buy] = max((-prices[ind] + solution(1,ind+1,prices,dp)), (0 + solution(0,ind+1,prices,dp)));
        }

        return dp[ind][buy] = max((prices[ind] + solution(0,ind+2,prices,dp)), (0 + solution(1,ind+1,prices,dp)));
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
     vector<vector<int>> dp(n, vector<int> (2,-1));  
     return solution(0,0,prices,dp); 
    }
};