1class Solution {
2public:
3    bool hasPathSum(TreeNode* root, int targetSum) {
4        if(root == nullptr){
5            return false;
6        }
7
8        if(root->left == nullptr && root->right == nullptr){
9            return targetSum == root->val;
10        }
11
12        int remaining = targetSum - root->val;
13
14        if(root->left){
15           if(hasPathSum(root->left,remaining)){
16            return true;
17           }
18        }
19
20        if(root->right){
21            if(hasPathSum(root->right,remaining)){
22                return true;
23            }
24        }
25
26        return false;
27    }
28};