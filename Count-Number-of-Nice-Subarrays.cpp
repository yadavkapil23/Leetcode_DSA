1class Solution {
2public:
3    int numberOfSubarrays(vector<int>& nums, int k) {
4        int n = nums.size();
5        unordered_map<int,int> m;
6        int result = 0;
7        int oddcount = 0;
8
9        m[oddcount] = 1;
10
11        for(int i=0 ; i<n ; i++){
12            oddcount += (nums[i]%2 == 0) ? 0 : 1;
13
14            if(m.count(oddcount-k)){
15                result += m[oddcount - k];
16            }
17
18            m[oddcount]++;
19        }
20
21        return result;
22    }
23};