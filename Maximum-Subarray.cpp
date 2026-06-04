1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n = nums.size();
5        int maxsum = INT_MIN;
6        int sum = 0;
7        for(int i=0 ; i<n ; i++){
8            sum += nums[i];
9            if(sum > maxsum){
10                maxsum = sum;
11            }
12            if(sum<0){
13                sum=0;
14            }
15        }
16        
17        return maxsum;
18    }
19};