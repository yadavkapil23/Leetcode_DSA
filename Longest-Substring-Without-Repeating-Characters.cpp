1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> seen;
5
6        int left=0;
7        int maxlen = 0;
8        for(int right = 0; right<s.size() ; right++){
9            while(seen.count(s[right])){
10                seen.erase(s[left]);
11                left++;
12            }
13        seen.insert(s[right]);
14        maxlen = max(maxlen,right-left+1);
15        }
16        return maxlen;
17    }
18};