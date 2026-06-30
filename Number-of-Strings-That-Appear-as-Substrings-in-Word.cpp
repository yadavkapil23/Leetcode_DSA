1class Solution {
2public:
3    int numOfStrings(vector<string>& patterns, string word) {
4        int n = patterns.size();
5        int count = 0;
6        for(int i=0 ; i<n ; i++){
7            int pos = word.find(patterns[i]);
8            if(pos == string::npos){
9                continue;
10            }
11            else{
12                count++;
13            }
14        }
15
16        return count;
17    }
18};