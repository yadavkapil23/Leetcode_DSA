1class Solution {
2public:
3    string intToRoman(int num) {
4
5map<int, string, greater<int>> mp;
6
7mp[1000] = "M";
8mp[900]  = "CM";
9mp[500]  = "D";
10mp[400]  = "CD";
11mp[100]  = "C";
12mp[90]   = "XC";
13mp[50]   = "L";
14mp[40]   = "XL";
15mp[10]   = "X";
16mp[9]    = "IX";
17mp[5]    = "V";
18mp[4]    = "IV";
19mp[1]    = "I";
20
21string ans;
22    
23for(auto &p : mp){
24    while(num>=p.first){
25        ans.append(p.second);
26        num = num-p.first;
27    }
28}
29return ans;
30    }
31};