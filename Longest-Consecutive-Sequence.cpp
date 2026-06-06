1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        int count = 0;
7        int maxcount = 0;
8        int n = nums.size();
9        for(int i=0 ; i<n ; i++){
10            if(i>0 && nums[i] == nums[i-1]+1){
11                count++;
12            }
13            else if(i>0 && nums[i] == nums[i-1]){
14                continue;
15            }
16            else{
17                count=1;
18            }
19            maxcount = max(maxcount,count);
20        }
21
22        return maxcount;
23    }
24};