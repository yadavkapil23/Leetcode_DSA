1class Solution {
2public:
3    string largestOddNumber(string s) {
4    
5    int n = s.size();
6    
7    string temp;
8    int index = -1;
9    
10    for(int i=0 ; i<n ; i++){
11       int a = s[i] - '0';
12        if(a%2 != 0){
13            index = i;
14        }
15    }
16
17    for(int i=0 ; i<=index ; i++){
18        temp += s[i];
19    }
20
21    return temp;
22    }
23};