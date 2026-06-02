1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        if(n==1){
6            return;
7        }
8        k = k%n;
9        reverse(nums.begin(),nums.end());
10        reverse(nums.begin()+k,nums.end());
11        reverse(nums.begin(),nums.begin()+k);
12    }
13};