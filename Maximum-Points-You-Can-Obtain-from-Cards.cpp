1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int n = cardPoints.size();
5        
6        int lsum = 0;
7        int rsum = 0;
8        int maxsum = 0;
9        for(int i=0 ; i<k ; i++){
10            lsum += cardPoints[i];
11            maxsum = lsum;
12        }
13
14        int rightind = n-1;
15
16        for(int i=k-1 ; i>=0 ; i--){
17            lsum -= cardPoints[i];
18            rsum += cardPoints[rightind];
19            rightind = rightind-1;
20
21            maxsum = max(maxsum,lsum+rsum);
22        }
23
24        return maxsum;
25    }
26};