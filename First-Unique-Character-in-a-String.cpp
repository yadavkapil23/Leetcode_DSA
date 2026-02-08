1class Solution {
2public:
3    int firstUniqChar(string s) {
4        
5        int l = s.length();
6
7        map<char,int> m;
8        for(char c : s){
9            m[c]++;
10        }
11        
12        for (int i = 0; i < s.size(); i++) {
13            if (m[s[i]] == 1) {
14                return i;
15            }
16        }
17        return -1;
18    }
19};