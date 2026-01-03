class Solution {
public:
    int removeDuplicates(vector<int>&v) {
       int n = v.size();
       int k=1;
        for(int j=1 ; j<n ; j++){
            if(v[j]!=v[j-1]){
                v[k] = v[j];
                k++;
            }
        }
       return k; 
    }
};