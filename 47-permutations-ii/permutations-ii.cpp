class Solution {
public:
    void backtrack(vector<bool> &used,vector<int> &curr,vector<int>  &nums,vector<vector<int>> &ans){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }

        for(int i=0 ; i<nums.size(); i++){
        if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) {
              continue;
        }
            curr.push_back(nums[i]);
            used[i] = true;
            backtrack(used,curr,nums,ans);
            used[i] = false;
            curr.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
    sort(nums.begin(), nums.end());
     vector<int> curr;
     vector<bool> used(nums.size(),false);
     vector<vector<int>> ans;
     backtrack(used,curr,nums,ans);
     return ans;   
    }
};