1class Solution {
2public:
3    int beautySum(string s) {
4     int n = s.size();
5    int ans = 0;
6
7    for(int i = 0; i < n; i++) {
8
9        unordered_map<char, int> freq;
10
11        for(int j = i; j < n; j++) {
12
13            freq[s[j]]++; 
14
15            int maxFreq = 0;
16            int minFreq = INT_MAX;
17            for(auto &p : freq) {
18                maxFreq = max(maxFreq, p.second);
19                minFreq = min(minFreq, p.second);
20            }
21
22            ans += (maxFreq - minFreq);
23        }
24    }
25    return ans;
26    }
27};