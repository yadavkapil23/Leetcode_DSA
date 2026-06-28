1class Solution {
2public:
3    int minSteps(string s, string t) {
4        int n = s.length();
5        int mp_s[26] = {0};
6        int mp_t[26] = {0};
7        int count = 0;
8        if(s.length() != t.length()){
9            return 0;
10        }
11
12        for(int i=0 ; i<n ; i++){
13            mp_s[s[i] - 'a']++;
14            mp_t[t[i] - 'a']++;
15        }
16        for(int i=0 ; i<26 ; i++){
17            if(mp_s[i] > mp_t[i]){
18            count += abs(mp_s[i] - mp_t[i]);
19        }
20        }
21        return count;
22    }
23};