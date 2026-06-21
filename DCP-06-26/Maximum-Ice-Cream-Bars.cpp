1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4        int n = costs.size();
5
6        sort(costs.begin(),costs.end());
7        int count = 0;
8        int i=0;
9        while(i<n){
10            if(costs[i] <= coins){
11                coins -= costs[i];
12                count++;
13            }
14             i++;
15        }
16
17        return count;
18    }
19};