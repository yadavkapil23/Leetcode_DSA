1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5        int count = 0;
6        for(int i=0 ; i<n ; i++){
7            int sum = 0;
8            for(int j=i ; j<n ; j++){
9                sum += nums[j];
10
11            if(sum == k){
12                count++;
13            }
14            }
15        }
16
17        return count;
18    }
19};