1class Solution {
2public:
3    int needdays(vector<int>& weights,int capacity){
4            int days_needed = 1;
5            int load = 0;
6
7            for(int i=0; i<weights.size() ; i++){
8                if(load + weights[i] > capacity){
9                    days_needed++;
10                    load = weights[i];
11                }
12                else{
13                    load += weights[i];
14                }
15        }
16        return days_needed;
17    }
18    int shipWithinDays(vector<int>& weights, int days){
19        int low = *max_element(weights.begin(), weights.end());
20        int high = accumulate(weights.begin(), weights.end(), 0);
21
22        while(low<=high){
23            int mid = low + (high-low)/2;
24
25            int daysreq = needdays(weights,mid);
26            if(daysreq <= days){
27                high = mid-1;
28            }
29            else{
30                low = mid+1;
31            }
32        }
33        return low;
34    }
35};