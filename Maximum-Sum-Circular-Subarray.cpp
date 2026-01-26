1class Solution {
2public:
3    int maxSubarraySumCircular(vector<int>& v) {
4
5        int n = v.size();
6
7        int sum = 0;
8        int maxi = INT_MIN;
9        int maxElement = INT_MIN;
10        //finding max sum using kadane;
11        for(int i=0 ; i<n ; i++){
12            sum += v[i];
13        maxElement = max(maxElement, v[i]);
14            if(sum<0){
15                sum=0;
16            }
17            if(sum>maxi){
18                maxi = sum;
19            }
20        }
21        int normalmax  = maxi;
22
23        if (normalmax == 0)
24            return maxElement;
25
26
27        //totalsum
28        int total = 0;
29        for(int i=0 ; i<n ; i++){
30            total += v[i];
31        }
32
33        sum = 0;
34        //now finding the min sum.
35        int mini = INT_MAX;
36        for(int i=0 ; i<n ; i++){
37            sum += v[i];
38
39            if(sum>0){
40                sum=0;
41            }
42            if(sum<mini){
43                mini = sum;
44            }
45        }
46        int minisum = mini;
47
48        ;
49        return max(normalmax,total-minisum);
50    }
51};