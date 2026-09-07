class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int start = 0;
        int sum = 0;
        int maxi = 0;
        int end = nums.size() - 1;

        sort(nums.begin(),nums.end());
        while(start < end){
        sum = (nums[start] + nums[end]);
        maxi = max(maxi,sum);
        start++,end--;
        }

        return maxi;
    }
};