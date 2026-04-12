1
2class Solution {
3public:
4    bool checkTree(TreeNode* root) {
5      if(root==nullptr){
6        return true;
7      }  
8
9      if(root->left == nullptr && root->right ==nullptr){
10        return true;
11      }
12
13      int leftval = 0;
14      int rightval = 0;
15
16      if(root->left != nullptr){
17        leftval = root->left->val;
18      }
19
20      if(root->right != nullptr){
21        rightval = root->right->val;
22      }
23
24      if(root->val != leftval + rightval){
25        return false;
26      }
27
28      return checkTree(root->left) && checkTree(root->right);
29    }
30};