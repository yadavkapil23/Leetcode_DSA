1class Solution {
2public:
3    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
4        if(root==nullptr || root==p || root==q){
5            return root;
6        }
7
8        TreeNode* left = lowestCommonAncestor(root->left,p,q);
9        TreeNode* right = lowestCommonAncestor(root->right,p,q);
10
11        if(left == nullptr){
12            return right;
13        }
14        else if(right == nullptr){
15            return left;
16        }
17        else{
18            return root;
19        }
20    }
21};