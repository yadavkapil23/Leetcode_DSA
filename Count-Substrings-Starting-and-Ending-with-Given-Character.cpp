1class Solution {
2public:
3    long long countSubstrings(string s, char c) {
4        long long subst = 0;
5        long long count = 0;
6
7        for(char ch : s){
8            if(ch == c){
9                subst += (1+count);
10                count++;
11            }
12        }
13        return subst;   
14    }
15};