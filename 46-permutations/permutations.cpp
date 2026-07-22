class Solution {
public:
    void backtrack(vector<int> &curr,vector<int> &nums,vector<bool> &used,vector<vector<int>> &ans){
    if (curr.size() == nums.size()) {
        ans.push_back(curr);
        return;
    }

        for(int i=0 ; i<nums.size(); i++){
            if(used[i]){
                continue;
            }

            curr.push_back(nums[i]);
            used[i] = true;
            backtrack(curr,nums,used,ans);
            curr.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        vector<int> curr;
        vector<vector<int>> ans;
        backtrack(curr,nums,used,ans);
        return ans;
    }
};