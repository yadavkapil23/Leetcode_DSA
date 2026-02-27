1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int start=0;
5        int maxlen=1;
6        int n = s.size();
7        if(n==0){
8            return "";
9        }
10        else if(n==1){
11            return s;
12        }
13        else{
14            //for even
15            int l;
16            int r;
17            for(int i=0 ; i<n ; i++){
18                l=i;
19                r=i;
20                while(l>=0 && r<n && s[l]==s[r]){
21                    int len = r-l+1;
22                    if(len > maxlen){
23                        maxlen = len;
24                        start = l;
25                    }
26                    l--;
27                    r++;
28                }
29
30                //for odd
31                l=i;
32                r=i+1;
33                while(l>=0 && r<n && s[l]==s[r]){
34                    int len = r-l+1;
35                    if(len>maxlen){
36                        maxlen = len;
37                        start = l;
38                    }
39                    l--;
40                    r++;
41                }
42            }
43        }
44
45        return s.substr(start,maxlen);
46    }
47};