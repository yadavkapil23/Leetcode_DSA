1class Solution {
2public:
3    int minimumLength(string s) {
4        int n = s.size();
5        vector<int> freq(26,0);
6
7        for(int i=0 ; i<n ; i++){
8            freq[s[i] - 'a'] += 1;
9
10            if(freq[s[i] - 'a'] == 3){
11                freq[s[i] - 'a'] -= 2;
12            }
13        }
14
15        int result = 0;
16        for(int i=0 ; i<26 ; i++){
17
18            if(freq[i] == 0){
19                continue;
20            }
21
22            result += freq[i];
23        }
24
25        return result;
26    }
27};