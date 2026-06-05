1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int candidate = -1; //Initially there is no candidate.
5        int candidate2 = -1;
6        int count = 0;
7        int count2 = 0;
8        vector<int> ans;
9
10        for(int i=0 ; i<nums.size() ; i++){
11            if(nums[i] == candidate){
12                count++;
13            }
14
15            else if(nums[i] == candidate2){
16                count2++;
17            }
18
19            else if(count == 0){  
20            candidate = nums[i];
21            count=1;
22            }
23
24           else if(count2 == 0){
25                candidate2 = nums[i];
26                count2=1;
27            }
28
29            else{
30                count--;
31                count2--;
32            }
33        }
34
35
36        count = 0;
37        count2 = 0;
38        for(int i=0 ; i<nums.size() ; i++){
39
40            if(nums[i] == candidate){
41                count++;
42            }
43            else if(nums[i] == candidate2){
44                count2++;
45            }
46        }
47            if(count > nums.size()/3){
48                ans.push_back(candidate);
49            }
50
51            if(count2 > nums.size()/3){
52                ans.push_back(candidate2);
53            }
54
55        return ans;
56    }
57};