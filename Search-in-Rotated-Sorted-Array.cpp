1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int left = 0;
6        int mid;
7        int right = n-1;
8
9        while(left <=  right){
10            
11            mid = left + (right-left)/2;
12            if(target == nums[mid]){
13                return mid;
14            }
15
16            else if(nums[left]  <= nums[mid]){
17                if(target >= nums[left] && target < nums[mid]){
18                    right = mid-1;
19                }
20                else{
21                    left = mid+1;
22                }
23            }
24
25            else if(nums[right] > nums[mid]){
26                if(target <= nums[right] && target > nums[mid]){
27                    left = mid+1;
28                } 
29                else{
30                    right = mid-1;
31                }
32            }
33        }
34        return -1;
35    }
36};