1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        vector<int> result;
5        priority_queue<pair<int, int>> pq; 
6        
7        for (int i = 0; i < nums.size(); i++) {
8            pq.push({nums[i], i});
9            
10            if (i >= k - 1) {
11                while (!pq.empty() && pq.top().second <= i - k) {
12                    pq.pop();
13                }
14                result.push_back(pq.top().first);
15            }
16        }
17        return result;
18    }
19};