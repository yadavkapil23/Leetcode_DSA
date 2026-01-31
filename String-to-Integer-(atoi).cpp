1class Solution {
2public:
3    int myAtoi(string s) {
4
5        int i=0;
6        int sign = 1;
7        long long num = 0;
8        int n = s.size();
9
10        while(i<n && s[i] == ' '){
11            i++;
12        }
13
14        if(i<n && s[i] == '-'){
15            sign = -1;
16            i++;
17        }
18        else if(i<n && s[i] == '+'){
19            i++;
20        }
21
22        while(i<n && isdigit(s[i])){
23            int digit = s[i] - '0';
24         if (num > (INT_MAX - digit) / 10) {
25                if (sign == 1)
26                    return INT_MAX;
27                else
28                    return INT_MIN;
29            }
30
31            num = num*10+digit;
32            i++;
33        }
34        return sign*num;
35    }
36};