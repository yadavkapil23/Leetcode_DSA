1class Solution {
2public:
3    vector<string> findWords(vector<string>& words) {
4        string s1 = "qwertyuiop";
5        string s2 = "asdfghjkl";
6        string s3 = "zxcvbnm";
7
8        vector<string> ans;
9
10        for(string word  : words){
11
12            vector<int> rows(3,0);
13
14            for(char c : word){
15                c = tolower(c);
16
17                if(s1.find(c) != string::npos){
18                    rows[0] = 1;
19                }
20                else if(s2.find(c) != string::npos){
21                    rows[1] = 1;
22                }
23                else{
24                    rows[2] = 1;
25                }
26            }
27
28            int sum = rows[0] + rows[1] + rows[2];
29            if(sum == 1){
30                ans.push_back(word);
31            }
32        }
33
34        return ans;
35    }
36};