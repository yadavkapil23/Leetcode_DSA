class Solution {
public:
    int func(vector<vector<int>> &dp,string &text1,string &text2,int ind1,int ind2){

        if(ind1 <0 || ind2 <0){
            return 0;
        }

        if(dp[ind1][ind2] != -1){
            return dp[ind1][ind2];
        }

        if(text1[ind1] == text2[ind2]){
          return dp[ind1][ind2]  =  1 + func(dp,text1,text2,ind1-1,ind2-1);
        }

        //if not.

        return dp[ind1][ind2] = max(func(dp,text1,text2,ind1-1,ind2),func(dp,text1,text2,ind1,ind2-1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int ind1 = text1.size();
        int ind2 = text2.size();
        vector<vector<int>> dp(ind1,vector<int> (ind2,-1));

        return func(dp,text1,text2,ind1-1,ind2-1);
    }
};