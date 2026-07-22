class Solution {
public:
    void backtracking(int index,vector<int>  &nums,vector<int> &curr,vector<vector<int>> &ans){
        ans.push_back(curr);
        if(index == nums.size()){
            return;
        }

        for(int i=index ; i<nums.size() ; i++){
        if (i > index && nums[i] == nums[i - 1])
                continue;
            curr.push_back(nums[i]);
            backtracking(i+1,nums,curr,ans);
            curr.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> curr;
        vector<vector<int>> ans;
        backtracking(0,nums,curr,ans);
        return ans;
    }
};