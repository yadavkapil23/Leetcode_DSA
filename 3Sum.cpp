1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        vector<vector<int>> ans;
6        int sum = 0;
7        int n = nums.size();
8
9        for(int i=0 ; i<n-2 ; i++){
10            if(i>0 && nums[i] == nums[i-1]){
11                continue;
12            }
13
14        int left = i+1;
15        int right = n-1;
16
17        while(left < right){
18            sum = nums[i] + nums[left] + nums[right];
19            if(sum == 0){
20                ans.push_back({nums[i],nums[left],nums[right]});
21                left++;
22                right--;
23
24            while(left <  right && nums[left] == nums[left-1]){
25                left++;
26            }
27
28            while(left <  right && nums[right] == nums[right+1]){
29                right--;
30            }
31            }
32
33           else if(sum<0){
34                left++;
35            }
36
37            else{
38                right--;
39            }
40        }
41        }
42        return ans;
43    }
44};