class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        int prefix = 1;
        int suffix = 1;
        vector<int> result(n,1);
        if(n==0){
            return v;
        }
        for(int i=0 ; i<n ; i++){
            result[i] = prefix;
            prefix *= v[i];
        }

        for(int i = n-1 ; i>=0 ; i--){
            result[i] *= suffix;
            suffix *= v[i];
        }

        return result;
    }
};