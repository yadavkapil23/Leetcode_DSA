1class Solution {
2public:
3static bool comparison(const pair<int,int> &a, const pair<int,int> &b){
4    return a.second > b.second;
5}
6    vector<int> topKFrequent(vector<int>& nums, int k) {
7        unordered_map<int,int> freq;
8        vector<pair<int,int>> a;
9        int n = nums.size();
10
11        for(int i=0 ; i<n ; i++){
12            freq[nums[i]]++;
13        }
14
15        for(auto&p : freq){
16            a.push_back({p.first,p.second});
17        }
18
19        sort(a.begin(),a.end(),comparison);
20
21
22        vector<int> x;
23        for(int i=0 ; i<k; i++){
24            x.push_back(a[i].first);
25        }
26
27        return x;
28    }
29};