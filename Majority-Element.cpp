1class Solution {
2public:
3    int majorityElement(vector<int>& nums){
4        int candidate=-1;
5        int count=0;
6        int ans;
7
8        for(int i=0 ; i<nums.size(); i++){
9            if(count == 0){
10                candidate = nums[i];
11                count=1;
12            }
13
14            else  if(nums[i]==candidate){
15                count++;
16            }
17            else{
18                count--;
19            }
20        }
21
22        for(int i=0 ; i<nums.size() ; i++){
23            if(candidate == nums[i]){
24                count++;
25            }
26
27            if(count > nums.size()/2){
28                ans = candidate;
29            }
30        }
31
32        return candidate;
33    }
34};