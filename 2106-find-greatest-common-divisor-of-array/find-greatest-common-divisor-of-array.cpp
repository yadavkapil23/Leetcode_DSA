class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minno = INT_MAX;
        int maxno = INT_MIN;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i] > maxno){
                maxno = nums[i];
            }

            if(nums[i] < minno){
                minno = nums[i];
            }
        }

        int x = gcd(maxno,minno);

        return x;
    }
};