1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque<int> dq;
5        vector<int> result;
6        int n = nums.size();
7
8        for(int i=0 ; i<n ; i++){
9
10            while(!dq.empty() && dq.front() <= i-k){
11                dq.pop_front();
12            }
13
14            while(!dq.empty() && nums[dq.back()] <= nums[i]){
15                dq.pop_back();
16            }
17
18            dq.push_back(i);
19
20            if(i>=k-1){
21                result.push_back(nums[dq.front()]);
22            }
23        }
24
25        return result;
26    }
27};