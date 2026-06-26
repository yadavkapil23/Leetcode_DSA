1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4
5        // reverse(s.begin(),s.end());
6        int n = s.size();
7
8        int left = 0;
9        int right = n-1;
10
11        while(left < right){
12            char temp  = s[left];
13            s[left] = s[right];
14            s[right] = temp;
15            left++;
16            right--;
17        }
18    }
19};