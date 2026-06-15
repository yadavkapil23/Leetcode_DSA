1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        int n = code.size();
5        vector<int> result(n,0);
6
7        if(k>0){
8            for(int i=0 ; i<n ; i++){
9                int sum = 0;
10                for(int j=i+1 ; j<=i+k ; j++){
11                    sum += code[j%n];
12                }
13                result[i] = sum;
14            }
15        }
16
17        else if(k<0){
18            for(int i=0 ; i<n ; i++){
19                int sum = 0;
20                for(int j=i-1 ; j>=i-abs(k) ; j--){
21                    sum += code[(j+n)%n];
22                }
23                result[i] = sum;
24            }
25        }
26
27        else if(k==0){
28            return result;
29        }
30
31        return result;
32    }
33};