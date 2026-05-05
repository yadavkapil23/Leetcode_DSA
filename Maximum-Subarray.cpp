1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int currsum = nums[0];
5        int maxsum = nums[0];
6        for(int i=1 ; i<nums.size() ; i++){
7            currsum = max(nums[i],nums[i]+currsum);
8            maxsum = max(currsum,maxsum);
9        }
10        return maxsum;
11    }
12};