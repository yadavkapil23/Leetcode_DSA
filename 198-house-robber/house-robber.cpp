class Solution {
public:
    int dynamicprog(vector<int> &dp,vector<int> &nums,int n){
        if(n==0){
            return nums[0];
        }

        if(n<0){
            return 0;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int pick = nums[n] + dynamicprog(dp,nums,n-2);
        int notpick = dynamicprog(dp,nums,n-1);

      return  dp[n] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> dp(n+1,-1);
        return dynamicprog(dp,nums,n);
    }
};