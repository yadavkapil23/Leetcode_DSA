1class Solution {
2public:
3    TreeNode* searchBST(TreeNode* root, int val) {
4        if(root==nullptr){
5            return nullptr;
6        }
7
8        if(root->val == val){
9            return root;
10        }
11        else if(root->val < val){
12           return searchBST(root->right,val);
13        }
14        else{
15          return  searchBST(root->left,val);
16        }
17    }
18};