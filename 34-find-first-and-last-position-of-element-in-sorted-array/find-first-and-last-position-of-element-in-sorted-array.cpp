class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int n = v.size();
        int start = -1;
        int end = -1;
        for(int i=0 ; i<n ; i++){
            if(v[i]==target){
                if(start == -1){
                    start = i;
                }
                end = i;
            }
        }
            vector<int> result;
            result.push_back(start);
            result.push_back(end);
        return result;
    }
};