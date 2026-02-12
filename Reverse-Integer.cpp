1class Solution {
2public:
3int reverse(int x) {
4        bool negative = false;
5        long long num = x;
6        if(num<0){
7            negative = true;
8            num = -num;
9        }
10        
11        string s = to_string(num);
12        
13        std::reverse(s.begin(), s.end());
14        
15        long long ans = stoll(s);
16        
17        if(negative){
18            ans = -ans;
19        }
20        
21        if(ans > INT_MAX || ans<INT_MIN){
22            return 0;
23        }
24
25        return (int)ans;
26}
27};