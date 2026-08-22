class Solution {
public:
    void backtrack(int sum,int index,vector<int> &candidates,vector<vector<int>> &ans,vector<int> &curr,int target){
        if(index == candidates.size()){
            return;
        }

        if(target == 0){
            ans.push_back(curr);
            return;
        }

        if(target < 0){
            return;
        }

        for(int i=index ; i<candidates.size() ; i++){
            curr.push_back(candidates[i]);
            backtrack(sum,i,candidates,ans,curr,target-candidates[i]);
            curr.pop_back();
        }
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> ans;
        backtrack(0,0,candidates,ans,curr,target);
        return ans;

    }
};