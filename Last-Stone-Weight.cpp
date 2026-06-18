1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        int n = stones.size();
5
6        sort(stones.begin(),stones.end(),greater<int>());
7        priority_queue<int> pq;
8        for(int i=0 ; i<n ; i++){
9            pq.push(stones[i]);
10        }
11
12        while(pq.size() > 1){
13            int first = pq.top();
14            pq.pop();
15            int second = pq.top();
16            pq.pop();
17
18            if(second != first){
19                pq.push(first-second);
20            }
21        }
22        pq.push(0);
23        return pq.top();
24
25    }
26};