1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n = nums.size();
5
6        if(n==1){
7            return nums[0];
8        }
9        for(int i=0 ; i<n ; i++){
10            if(i==0){
11                if(nums[i] != nums[i+1]){
12                    return nums[i];
13                }
14            }
15
16            else if(i == n-1){
17                if(nums[i] != nums[i-1]){
18                    return nums[i];
19                }
20            }
21            else if(i>0 && i<n-1 && nums[i] != nums[i-1] && nums[i] != nums[i+1]){
22                return nums[i];
23            }
24            else{
25                continue;
26            }
27        }
28
29        return 0;
30    }
31};