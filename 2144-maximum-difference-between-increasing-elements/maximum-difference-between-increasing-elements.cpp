class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi  = -1;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                int diff = (nums[j] - nums[i]);
                if(diff > 0)          
                    maxi = max(maxi, diff);
            }
            }

        return maxi;
    }
};