1class Solution {
2public:
3    string frequencySort(string s) {
4            unordered_map<char,int> m;
5    
6    for(char x : s){
7        m[x]++;
8    }
9    
10    vector<pair<char,int>> v(m.begin(),m.end());
11    
12    sort(v.begin(),v.end(),[](auto &a,auto &b){
13        return a.second > b.second;
14    });
15    
16    
17    string ans;
18    
19    for(auto &p : v){
20        int a = p.second;
21        while(a!=0){
22            ans.push_back(p.first);
23            a--;
24        }
25    }
26
27    return ans;
28    
29    }
30};