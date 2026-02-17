1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4
5        char smap[256] = {0};
6        char tmap[256] = {0};
7
8        for(int i=0 ; i<s.size() ; i++){
9            char a = s[i];
10            char b = t[i];
11
12            if(smap[a] == 0){
13                smap[a] = b;
14            }
15            else if(smap[a] != b){
16                return false;
17            }
18
19            if(tmap[b] == 0){
20                tmap[b] = a;
21            }
22            else if(tmap[b] != a){
23                return false;
24            }
25        }
26        return true;
27    }
28};