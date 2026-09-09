class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() <= 2){
            return -1;
        }
        else{
        sort(nums.begin(),nums.end());
        return nums[1];
        }

        return -1;
    }
};