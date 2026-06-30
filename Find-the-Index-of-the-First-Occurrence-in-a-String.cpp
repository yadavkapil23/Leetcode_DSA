1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int pos = haystack.find(needle);
5
6        if(pos == string::npos){
7            return -1;
8        }
9        
10        return pos;
11    }
12};