1 class Solution {
2public:
3    TreeNode* helper(vector<int> &nums,int st,int end){
4        if(st> end){
5            return nullptr;
6        }
7        int mid = st + (end - st)/2;
8        TreeNode* root = new TreeNode(nums[mid]);
9
10        root->left = helper(nums,st,mid-1);
11        root->right = helper(nums,mid+1,end);
12
13        return root;
14    }
15    TreeNode* sortedArrayToBST(vector<int>& nums) {
16        int st = 0;
17        int end = nums.size()-1;
18        return helper(nums,st,end);
19    }
20};