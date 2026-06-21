1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        unordered_set<int> seen;
5        long long prefix = 0;
6        int prevRem = 0;
7
8        for(int x : nums){
9            prefix += x;
10            int rem = prefix % k;
11
12            if(seen.count(rem))
13                return true;
14
15            seen.insert(prevRem);
16            prevRem = rem;
17        }
18
19        return false;
20    }
21};