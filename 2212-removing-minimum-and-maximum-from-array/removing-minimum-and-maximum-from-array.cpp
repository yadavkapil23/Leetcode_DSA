class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    vector<int> v;
    int maxi = INT_MIN;
    int maxindex = -1;
    int minindex = -1;
    int mini = INT_MAX;
    int n = nums.size();
    for(int i=0 ; i<n ; i++){
        if(nums[i] > maxi){
            maxi = nums[i];
            maxindex = i;
        }

        if(nums[i] < mini){
            mini = nums[i];
            minindex = i;
        }
    }
    int s1 = max(minindex, maxindex) + 1;           // both from front
    int s2 = n - min(minindex, maxindex);            // both from back
    int s3 = min(minindex, maxindex) + 1 + (n - max(minindex, maxindex));//one from front & one from back

    return min({s1, s2, s3});

    }
};