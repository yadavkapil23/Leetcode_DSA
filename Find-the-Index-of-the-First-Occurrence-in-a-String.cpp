1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4    int pos = haystack.find(needle);
5    if(pos == string::npos){
6        return -1;
7    }
8        return pos;
9    }
10};