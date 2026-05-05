1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum = 0;
5        int maxsum = nums[0];
6        for(int i=0 ; i<nums.size() ; i++){
7            sum += nums[i];
8            if(sum > maxsum){
9                maxsum = sum;
10            }
11
12            if(sum<0){
13                sum=0;
14            }
15        }
16        return maxsum;
17    }
18};