class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int currend = 0;
        int farthest = 0;
        int jump=0;

        for(int i=0 ; i<n-1 ; i++){ //skip the last jump , as we have reached the destination.
            farthest = max(farthest,i+nums[i]); //farthese point we can go from this position.

            if(i==currend){ //if the ith pointer is at the prev jump ending point, menas , now we need one more jump to go next , so jump++ and now initialse the currend to farthest.
                jump++;
                currend = farthest;
            }
        }

        return jump;
    }
};