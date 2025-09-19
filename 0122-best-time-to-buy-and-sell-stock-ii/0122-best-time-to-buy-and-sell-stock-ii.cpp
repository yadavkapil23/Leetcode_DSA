class Solution {
public:
    int maxProfit(vector<int>& v){
        int n = v.size();
        int profit = 0;
        for(int i=1 ; i<n ; i++){
            if(v[i] > v[i-1]){
                profit += (v[i] - v[i-1]);
            }
        }
        return profit;       
    }
};