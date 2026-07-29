class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int a = nums[n-1];
        int b = nums[n-2];
        int c = nums[n-3];

        int product1 = a*b*c; //if positive , take the last 3 biggest.
        int product2 = nums[0]*nums[1]*nums[n-1]; //if neg , take the first 2 neg no and the last biggest positive
        return max(product1,product2);
    }
};