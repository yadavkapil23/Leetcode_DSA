1class Solution {
2public:
3    string removeDuplicateLetters(string s) {
4        int n = s.size();
5
6        string result;
7
8        vector<bool> taken(26,false);
9        vector<int> lastindex(26);
10
11        for(int i=0 ; i<n ; i++){
12            char ch = s[i];
13            lastindex[ch-'a'] = i;
14        }
15
16        for(int i=0 ; i<n ; i++){
17           char ch = s[i];
18            int idx = ch - 'a';
19
20            if(taken[idx] == true){
21                continue;
22            }
23
24            while(result.size() > 0 && result.back() > ch && lastindex[result.back()-'a'] > i){
25           taken[result.back()-'a'] = false;
26           result.pop_back();     
27            }
28
29            result.push_back(ch);
30            taken[idx] = true;
31        }
32        return result;
33    }
34};