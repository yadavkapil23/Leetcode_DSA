class Solution {
public:
    void backtrack(int target,int index,vector<int> &candidates,vector<int> &curr,vector<vector<int>> &ans){

        if(target ==0){
            ans.push_back(curr);
            return;
        }

        if(target < 0){
            return;
        }

        for(int i=index ; i<candidates.size() ; i++){
            if(i>index && candidates[i] == candidates[i-1]){
                continue;
            }

            curr.push_back(candidates[i]);
            backtrack(target - candidates[i],i+1,candidates,curr,ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        vector<vector<int>> ans;
        backtrack(target,0,candidates,curr,ans);
        return ans;
    }
};