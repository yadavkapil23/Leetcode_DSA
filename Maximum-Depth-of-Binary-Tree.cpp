1class Solution {
2public:
3    int maxDepth(TreeNode* root) {
4        if(root == nullptr){
5            return 0;
6        }
7
8        int lh = maxDepth(root->left);
9        int rh = maxDepth(root->right);
10
11        return 1+max(lh,rh);
12    }
13};