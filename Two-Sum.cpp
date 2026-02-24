1class Solution {
2public:
3    vector<int> twoSum(vector<int>& v, int target) {
4        int n = v.size();
5
6        unordered_map<int,int> m;
7        int compliment;
8
9        for(int i=0 ; i<n ; i++){
10        compliment = target - v[i];
11
12        if(m.find(compliment) != m.end()){
13            return {m[compliment],i};
14        }
15
16        m[v[i]] = i;
17        }
18        return {};
19    }
20};