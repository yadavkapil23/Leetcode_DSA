1class Solution {
2public:
3    int maxFreqSum(string s) {
4        unordered_map<char,int> m1;
5        unordered_map<char,int> m2;
6
7        int n = s.size();
8        for(int i=0 ; i<n ; i++){
9            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
10                m1[s[i]]++;
11            }
12            else{
13                m2[s[i]]++;
14            }
15        }
16
17        int max1 = 0;
18        for(auto&p : m1){
19            if(p.second > max1){
20                max1 = p.second;
21            }
22        }
23
24        int max2 = 0;
25        for(auto &q : m2){
26            if(q.second > max2){
27                max2 = q.second;
28            }
29        }
30
31        return max1+max2;
32    }
33};