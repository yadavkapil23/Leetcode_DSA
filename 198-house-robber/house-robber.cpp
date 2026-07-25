class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() <= 0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }

        int a = nums[0];
        int b = max(nums[0],nums[1]);
        int result = 0;
        for(int i=2 ; i<n ; i++){
           result = max(b,a+nums[i]);
            a = b;
            b = result;
        }

        return b;
    }
};