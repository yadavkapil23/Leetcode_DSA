class Solution {
public:
    int func(vector<int> &nums,vector<int> &dp, int index, int start) {
        if (index < start)
            return 0;

        if (index == start)
            return nums[index];

        if(dp[index] != -1){
            return dp[index];
        }

        int pick = nums[index] + func(nums,dp, index - 2, start);
        int notpick = func(nums,dp, index - 1, start);

        return dp[index] = max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1){
            return nums[0];
        }
        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1,-1);


        int choice1 = func(nums,dp1,n-2,0);
        int choice2 = func(nums,dp2,n-1,1);

        return max(choice1,choice2);

    }
};