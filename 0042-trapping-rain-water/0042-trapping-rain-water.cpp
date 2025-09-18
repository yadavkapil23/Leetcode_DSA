class Solution {
public:
    int trap(vector<int>& v) {

        int n = v.size();
        vector<int> left(n);
        vector<int> right(n);
        
        left[0] = v[0];
        right[n-1] = v[n-1];
        
        //finding the maximum in the left.
        for(int i=1 ; i<n ; i++){
            left[i] = max(v[i],left[i-1]);
        }
        
        //finding the max in right.
        for(int j=n-2 ; j>=0 ; j--){
            right[j] = max(v[j],right[j+1]);
        }
        
        //now finding the maximum between them and area.
        int ans = 0;
        for(int i=0 ; i<n ; i++){
            ans += (min(left[i],right[i]) - v[i]);
        }
        return ans;
    }
};