class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        int m = v1.size();
        int n = v2.size();

        set<int> result;
        
        for(int i=0 ; i<m ;i++){
            for(int j=0 ; j<n ; j++){
            if(v1[i] == v2[j]){
                result.insert(v1[i]);
            }
            else{
                continue;
            }
        }
        }

        vector<int> ans;
        for(int i : result){
            ans.push_back(i);
        }
        return ans;
    }
};