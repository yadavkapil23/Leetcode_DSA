1class Solution {
2public:
3    long long calc(vector<int> & piles,int k){
4        long long samay = 0;
5        int n = piles.size();
6        for(int i=0 ; i<n ; i++){
7            samay += ceil((double)piles[i]/k);
8        }
9
10        return samay;
11    }
12    int minEatingSpeed(vector<int>& piles, int h) {
13        int low = 1;
14        int high = *max_element(piles.begin(),piles.end());
15
16        while(low <= high){
17            int mid = low + (high-low)/2;
18
19            if(calc(piles,mid) <= h){
20                high = mid-1;
21            }
22            else{
23                low = mid+1;
24            }
25        }
26
27        return low;
28    }
29};