class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int maxi = INT_MIN;
        if(nums.size() < 2){
            return 0;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(i>0 && (nums[i] - nums[i-1] > maxi)){
                maxi = nums[i] - nums[i-1];
            }
        }
        return maxi;
    }
};