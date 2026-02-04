1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string result;
5        int n = s.length();
6
7        int depth = 0;
8        for(int i=0 ; i<n ; i++){
9            if(s[i] == '('){
10                if(depth > 0){
11                    result.push_back(s[i]);
12                }
13                depth++;
14            }
15            else{ //case for '('
16                depth--;
17                if(depth > 0){
18                    result.push_back(s[i]);
19                }
20            }
21        }
22        return result;
23    }
24};