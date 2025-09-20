class Solution {
public:
    vector<int> rotate(vector<int>& v, int k) {
        int n = v.size();
        vector<int> temp;

    if (n == 0){
         return v;
    }
    k = k % n;


        for (int i = n-k; i < n; i++) {
            temp.push_back(v[i]);
        }

        for (int i = n-k-1; i >= 0; i--) {
            v[i+k] = v[i];
        }
        
        for (int i = 0; i < k; i++) {
            v[i] = temp[i];
        }
            return v;
    }
};