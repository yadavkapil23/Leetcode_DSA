class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> pq;
        int sum = 0;
        for(int i=0 ; i<n ; i++){
            pq.push(piles[i]);
            sum += piles[i];
        }

        for(int i=1 ; i<=k ; i++){
            int maxel = pq.top();
            pq.pop();

            int divid = maxel/2;

            sum = sum - divid;
            maxel = maxel - divid;

            pq.push(maxel);
        }

        return sum;

    }
};