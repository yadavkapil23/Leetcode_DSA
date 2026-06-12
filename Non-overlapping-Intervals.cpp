1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4        int n = intervals.size();
5        int count = 0;
6        int i=0;
7        int j=1;
8        sort(intervals.begin(),intervals.end());
9        while(j<n){
10
11            vector<int> curr = intervals[i];
12            vector<int> next = intervals[j];
13
14            int cs = curr[0];
15            int ce = curr[1];
16
17            int ns = next[0];
18            int ne = next[1];
19
20            if(ce <= ns){
21                //no overlapping.
22                i=j;
23                j++;
24            }
25            else if(ce <= ne){
26                //overlapping.
27                j++;
28                count++;
29            }
30            else if(ce > ne){
31                //overlapping.
32                i=j;
33                j++;
34                count++;
35            }
36
37
38        }
39        return count;
40    }
41};