class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int n = v.size();
        int maxi = v[0];
        int sum = 0;
        for(int i=0 ; i<n ; i++){
            sum += v[i];

        //kadane algo.
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
        }
    return maxi;
    }
};