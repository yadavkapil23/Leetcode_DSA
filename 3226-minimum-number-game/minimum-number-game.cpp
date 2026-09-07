class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i=0 ; i<nums.size() ; i+=2){
            if(i > n-2){
                break;
            }

            swap(nums[i],nums[i+1]);
        }

        return nums;
    }
};