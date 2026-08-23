class Solution {
public:
    void subs(int index,vector<vector<int>> &ans,vector<int> &curr,vector<int> &nums){
        ans.push_back(curr);

        for(int i=index ; i<nums.size() ; i++){
            curr.push_back(nums[i]);
            subs(i+1,ans,curr,nums);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        subs(0,ans,curr,nums);

        return ans;
    }
};