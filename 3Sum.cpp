1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n = nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(),nums.end());
7
8        for(int i=0 ; i<n-2 ; i++){
9            if(i>0 && nums[i] == nums[i-1]){
10                continue;
11            }
12
13        int left = i+1;
14        int right = n-1;
15
16        while(left < right){
17            int sum = nums[i] + nums[left] + nums[right];
18            if(sum == 0){
19                ans.push_back({nums[i],nums[left],nums[right]});
20                left++,right--;
21
22            while(left < right  && nums[left] == nums[left-1]){
23                left++;
24            }
25
26            while(left <  right && nums[right] == nums[right+1]){
27                right--;
28            }
29            }
30
31        else if(sum < 0){
32            left++;
33        }
34        else{
35            right--;
36        }
37        }
38        }
39        return ans;
40    }
41};