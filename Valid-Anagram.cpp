1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4    unordered_map<char,int> m;
5    unordered_map<char,int> m2;
6    
7    for(char c : s){
8        m[c]++;
9    }
10    
11    for(char a : t){
12        m2[a]++;
13    }
14    
15    if(m==m2){
16        return true;
17    }
18    return false;
19    }
20};