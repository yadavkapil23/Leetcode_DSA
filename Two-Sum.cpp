1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        //2 ptr.
5        int n = nums.size();
6        vector<pair<int,int>> v;
7        
8        for(int i=0 ; i<n ; i++){
9            v.push_back({nums[i],i});
10        }
11        
12        sort(v.begin(),v.end());
13        int left = 0;
14        int right = n-1;
15        while(left < right){
16            int sum = v[left].first + v[right].first;
17            if(sum == target){
18                return {v[left].second,v[right].second};
19                left++,right--;
20            }
21            else if(sum < target){
22                left++;
23            }
24            else{
25                right--;
26            }
27        }
28        return {};
29    }
30};