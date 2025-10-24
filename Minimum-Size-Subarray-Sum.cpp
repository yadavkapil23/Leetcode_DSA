class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int n = v.size();
        int left = 0;
        int minlen = INT_MAX;
        int currsum=0;
        for(int right = 0 ; right < n ; right++){
            currsum += v[right];

        while(currsum >= target){
            minlen = min(minlen,right-left+1);
            currsum -= v[left];
            left++;
        }
        }
        if(minlen==INT_MAX){
            return 0;
        }
        else{
            return minlen;
        }
    }
};