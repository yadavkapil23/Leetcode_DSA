class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n  = v.size();
        int max_prod = INT_MIN;
        for(int i=0 ; i<n ;i++){
             int product = 1;
            for(int j=i ; j<n ; j++){
                    product *= v[j];

            max_prod = max(max_prod,product);
            }
        }
        return max_prod;
    }
};