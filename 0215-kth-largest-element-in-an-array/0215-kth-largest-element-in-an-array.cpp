class Solution {
public:
    int findKthLargest(vector<int>& v, int k){
        sort(v.begin(),v.end());
        int n = v.size();
        if(n==0){
            return 0;
        }

        if(k==0 || k<0 || k>n){
            return 0;
        }

        return v[n-k];
    }
};