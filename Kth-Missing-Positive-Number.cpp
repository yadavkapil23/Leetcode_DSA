1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int n = arr.size();
5
6        for(int i=0 ; i<n ; i++){
7            if(arr[i] <= k){
8                k++;
9            }
10            else{
11                break;
12            }
13        }
14
15        return k;
16    }
17};