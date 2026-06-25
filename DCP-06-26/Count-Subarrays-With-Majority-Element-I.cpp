1class Solution {
2public:
3    int countMajoritySubarrays(vector<int>& nums, int target) {
4        int n = nums.size();
5        int count = 0;
6        for(int i=0 ; i<n ; i++){
7           int no = 0;
8            for(int j=i ; j<n; j++){
9                if(nums[j] == target){
10                    no++;
11                }
12
13                int len = j-i+1;
14
15                if(2*no > len){
16                    count++;
17                }
18            }
19        }
20
21        return count;
22    }
23};