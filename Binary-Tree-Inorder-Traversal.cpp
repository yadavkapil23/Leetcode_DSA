1class Solution {
2public:
3    void inorder(TreeNode* root,vector<int> &ans){
4      if(root==nullptr){
5        return;
6      }  
7
8    inorder(root->left,ans);
9    ans.push_back(root->val);
10    inorder(root->right,ans);
11    }
12    vector<int> inorderTraversal(TreeNode* root) {
13        vector<int> ans;
14        inorder(root,ans);
15        return ans;
16    }
17};