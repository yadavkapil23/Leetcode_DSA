1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        unordered_map<int,int> m;
7        int left = 0;
8        int maxlen = 0;
9        for(int right = 0; right < n ; right++){
10            m[nums[right]]++;
11
12            while(m[nums[right]] > k){
13                m[nums[left]]--;
14                left++;
15            }
16
17            maxlen = max(maxlen,right-left+1);
18        }
19
20        return maxlen;
21    }
22};