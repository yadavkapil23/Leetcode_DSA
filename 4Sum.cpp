1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int n = nums.size();
5
6        vector<vector<int>> ans;
7        sort(nums.begin(),nums.end());
8
9        for(int i=0 ; i<n-3 ; i++){
10            if(i>0 && nums[i] == nums[i-1]){
11                continue;
12            }
13        for(int j=i+1 ; j<n-2 ; j++){
14            if(j>i+1 && nums[j] == nums[j-1]){
15                continue;
16            }
17
18        long long left = j+1;
19        long long right = n-1;
20
21        while(left < right){
22            long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[left] + (long long)nums[right];
23
24            if(sum == target){
25                ans.push_back({nums[i],nums[j],nums[left],nums[right]});
26                left++;
27                right--;
28
29            while(left <  right && nums[left] == nums[left-1]){
30                left++;
31            }
32
33            while(left < right && nums[right] == nums[right+1]){
34                right--;
35            }
36            }
37
38           else if(sum < target){
39                left++;
40            }
41            else{
42                right--;
43            }
44        }
45        }
46        }
47        return ans;
48    }
49};