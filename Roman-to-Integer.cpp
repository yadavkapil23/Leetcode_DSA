1class Solution {
2public:
3    int romanToInt(string s) {
4        int n = s.size();
5
6    map<char,int> mp;
7    mp['I'] = 1;
8    mp['V'] = 5;
9    mp['X'] = 10;
10    mp['L'] = 50;
11    mp['C'] = 100;
12    mp['D'] = 500;
13    mp['M'] = 1000;
14
15    int total = 0;
16
17    for(int i=0 ; i<n ; i++){
18        if(mp[s[i]] < mp[s[i+1]]){
19            total -= mp[s[i]];
20        }
21        else{
22            total += mp[s[i]];
23        }
24    }
25
26    return total;
27    }
28};