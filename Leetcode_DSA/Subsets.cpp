class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
        vector<vector<int>> result = {{}}; 

        for (int x : v) {
            int n = result.size();
            for (int i = 0; i < n; i++) {
                vector<int> newSubset = result[i]; 
                newSubset.push_back(x);          
                result.push_back(newSubset);       
            }
        }

        return result;
    }
};
