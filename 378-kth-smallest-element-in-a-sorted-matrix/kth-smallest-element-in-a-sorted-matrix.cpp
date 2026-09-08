class Solution {
public:
    vector<int> transform(vector<int> &ans,vector<int> &v){
        int m = v.size();

        for(int i=0 ; i<m ; i++){
            ans.push_back(v[i]);
        }

        return ans;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int sizz = matrix[0].size();
        vector<int> v(sizz);
        vector<int> ans;

        int n = matrix.size();
        for(int i=0 ; i<sizz ; i++){
            v = matrix[i];

        transform(ans,v);
        }

        sort(ans.begin(),ans.end());

        return ans[k-1];
    }
};