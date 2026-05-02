1class Solution {
2public:
3    int dp(int index,vector<int>  &nums,vector<int> &memo){
4        int took,nottook;
5        if(index == 0){
6            return nums[index];
7        }
8
9        if(index<0){
10            return 0;
11        }
12
13        if(memo[index] != -1){
14            return memo[index];
15        }
16
17        took  = nums[index] + dp(index-2,nums,memo);
18        nottook = dp(index-1,nums,memo);
19
20        return memo[index] = max(took,nottook);
21    }
22    int rob(vector<int>& nums) {
23        vector<int> memo(nums.size(),-1);
24       int index = nums.size()-1;
25        return dp(index,nums,memo);
26    }
27};