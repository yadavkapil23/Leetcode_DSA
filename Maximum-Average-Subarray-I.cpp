1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        double sum = 0;
7        for(int i=0 ; i<k ; i++){
8            sum += nums[i];
9        }
10
11        double maxsum = sum;
12
13        for(int i=k ; i<n ; i++){
14            sum += nums[i];
15            sum -= nums[i-k];
16            maxsum = max(maxsum,sum);
17        }
18
19        return maxsum/k;
20    }
21};