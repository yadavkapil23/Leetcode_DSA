1class Solution {
2public:
3    int mySqrt(int x) {
4        long long low = 0;
5        long long high = x;
6        long long ans = 1;
7
8        while(low <= high){
9            long long mid = low + (high-low)/2;
10
11            if(mid*mid <= x){
12                ans =  mid;
13                low = mid+1;
14            }
15            else{
16                high = mid-1;
17            }
18        }
19
20        int a = ans;
21        return a;
22    }
23};