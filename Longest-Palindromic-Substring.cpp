1class Solution {
2public:
3
4    bool solve(string &s, int i, int j) {
5    if (i >= j){
6        return true;
7    }
8
9    if (s[i] != s[j]){
10        return false;
11    }
12
13    return solve(s, i + 1, j - 1);
14}
15
16    string longestPalindrome(string s) {
17        int n = s.size();
18
19        int starting=0;
20        int maxi = INT_MIN;
21
22        for(int i=0 ; i<n ; i++){
23            for(int j=i ; j<n ; j++){
24                if(solve(s,i,j)){
25                    if((j-i+1) > maxi){
26                        maxi = j-i+1;
27                        starting = i;
28                    }
29                }
30            }
31        }
32        return s.substr(starting,maxi);
33    }
34};