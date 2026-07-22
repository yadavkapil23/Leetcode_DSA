class Solution {
public:
   void backtrack(int index,vector<int> &nums,vector<vector<int>> &ans,vector<int> &curr){
    int n = nums.size();
     ans.push_back(curr);
    
    for(int i=index ; i<n ; i++){
        curr.push_back(nums[i]);
        backtrack(i+1,nums,ans,curr);
        curr.pop_back();
    }
   }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> curr;
    vector<vector<int>> ans;
    backtrack(0,nums,ans,curr);
    
    return ans;  
    }
};

