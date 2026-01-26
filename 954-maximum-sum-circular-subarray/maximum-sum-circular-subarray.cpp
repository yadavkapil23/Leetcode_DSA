class Solution {
public:
    int maxSubarraySumCircular(vector<int>& v) {

        int n = v.size();

        int sum = 0;
        int maxi = INT_MIN;
        int maxElement = INT_MIN;
        //finding max sum using kadane;
        for(int i=0 ; i<n ; i++){
            sum += v[i];
        maxElement = max(maxElement, v[i]);
            if(sum<0){
                sum=0;
            }
            if(sum>maxi){
                maxi = sum;
            }
        }
        int normalmax  = maxi;

        if (normalmax == 0)
            return maxElement;


        //totalsum
        int total = 0;
        for(int i=0 ; i<n ; i++){
            total += v[i];
        }

        sum = 0;
        //now finding the min sum.
        int mini = INT_MAX;
        for(int i=0 ; i<n ; i++){
            sum += v[i];

            if(sum>0){
                sum=0;
            }
            if(sum<mini){
                mini = sum;
            }
        }
        int minisum = mini;

        ;
        return max(normalmax,total-minisum);
    }
};