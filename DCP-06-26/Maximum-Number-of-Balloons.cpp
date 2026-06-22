1#include<algorithm>
2#include<iostream>
3using namespace std;
4
5class Solution {
6public:
7    int maxNumberOfBalloons(string text) {
8        int n = text.length();
9
10        unordered_map<char,int> m;
11
12        for(char c : text){
13            if(c == 'b' || c == 'a' || c =='n' || c=='l' || c=='o'){
14                m[c]++;
15            }
16        }
17        int minsingle = min({m['b'],m['a'],m['n']});
18        int doublereq = min({m['l']/2,m['o']/2});
19
20        return min(minsingle,doublereq);
21    }
22};