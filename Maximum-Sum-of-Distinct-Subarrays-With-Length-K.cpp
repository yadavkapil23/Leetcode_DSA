1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5        int i=0;
6        int j=0;
7        long long result = 0;
8        long long currsum = 0;
9        unordered_set<int> st;
10
11        while(j<n){
12            while(st.count(nums[j])){
13                currsum -= nums[i];
14                st.erase(nums[i]);
15                i++;
16            }
17
18            currsum += nums[j];
19            st.insert(nums[j]);
20
21            if(j-i+1 == k){
22                result = max(currsum,result);
23                currsum -= nums[i];
24                st.erase(nums[i]);
25                i++;
26            }
27            j++;
28        }
29
30        return result;
31    }
32};