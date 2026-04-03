1class Solution {
2public:
3    bool isSymmetric(TreeNode* root) {
4        if(root==nullptr){
5            return true;
6        }
7
8        return isMirror(root->left,root->right);
9    }
10
11    bool isMirror(TreeNode* left,TreeNode* right){
12        if (left == NULL && right == NULL) {
13            return true;
14        }
15
16        if (left == NULL && right != NULL) {
17            return false;
18        }
19        if (left != NULL && right == NULL) {
20            return false;
21        }
22
23        if (left->val != right->val) {
24            return false;
25        }
26
27        bool outside = isMirror(left ->left,right->right);
28        bool inside = isMirror(left->right , right->left);
29
30
31        if(outside && inside){
32            return true;
33        }
34        else{
35            return false;
36        }
37    }
38};