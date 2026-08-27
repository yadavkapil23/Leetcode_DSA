class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int count = 0;

        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum < k){
                left++;
            }
            else if(sum > k){
                right--;
            }
            else{
                count++;
                left++;
                right--;
            }
        }

        return count;
    }
};