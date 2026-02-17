1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4    int n = s.size();
5	
6	string x = s;
7
8	int k = 0;
9    while(k<n){
10    s = x;
11	reverse(s.begin(),s.begin()+k);
12	reverse(s.begin()+k,s.end());
13    reverse(s.begin(),s.end());
14    
15    if(s == goal){
16        return true;
17    }
18      k++;
19    }
20    return false;  
21    }
22};