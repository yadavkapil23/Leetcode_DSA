1class Solution {
2public:
3    int firstoccurence(vector<int> &nums,int target){
4        int n = nums.size();
5        int index = -1;
6        for(int i=0 ; i<n ; i++){
7            if(nums[i] == target){
8                index = i;
9                break;
10            }
11        }
12        return index;
13    }
14
15    int lastoccurence(vector<int> &nums,int target){
16        int n = nums.size();
17        int ind = -1;
18        for(int i=0 ; i<n ; i++){
19            if(nums[i] == target){
20                ind = i;
21            }
22        }
23
24        return ind;
25    }
26    vector<int> searchRange(vector<int>& nums, int target) {
27        vector<int> ans;
28        ans.push_back(firstoccurence(nums,target));
29        ans.push_back(lastoccurence(nums,target));
30
31        return ans;
32
33    }
34};