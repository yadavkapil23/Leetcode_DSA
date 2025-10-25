class Solution {
public:
    int findLengthOfLCIS(vector<int>& v) {
        int n = v.size();
        if(n <= 0){
            return 0;
        }
        vector<int> res;
        int length = 1;
        int maxlen = 1;
        for(int i=1 ; i<n ; i++){
            if(v[i] > v[i-1]){
                length++;
            }
            else{
                length = 1;
            }
            maxlen = max(length,maxlen);
        }
        return maxlen;
    }
};