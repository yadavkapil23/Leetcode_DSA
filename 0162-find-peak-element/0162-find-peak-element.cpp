class Solution {
public:
    int findPeakElement(vector<int>&v){
        int n = v.size();
        if(n==0 || n==1){
            return 0;
        }

        if (n == 2) {
            return (v[0] > v[1]) ? 0 : 1;
        }
        
        for(int i=1 ; i<n-1 ; i++){
            if(v[0] > v[1]){
                return 0;
            }
            else if(v[n-2] < v[n-1]){
                return n-1;
            }
            else if(v[i] > v[i-1] && v[i] > v[i+1]){
                return i;
            }
        }
        return -1;
    }
};