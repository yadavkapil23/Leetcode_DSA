1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5        string prefix = strs[0];
6
7        for(int i=1 ; i<strs.size() ; i++){
8            while(strs[i].find(prefix) != 0){
9                prefix.pop_back();
10            if(prefix.empty()){
11            return "";
12        }
13            }
14        }
15        return prefix;
16    }
17};