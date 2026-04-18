1class Solution {
2public:
3    TreeNode* insertIntoBST(TreeNode* root, int val) {
4    if(root==nullptr){
5       return new TreeNode(val);
6    }
7
8    if(root->val < val){
9        if(root->right != nullptr){
10            insertIntoBST(root->right,val);
11        }
12        else{
13            root->right = new TreeNode(val);
14        }
15    }
16
17
18    else{
19            if(root->left != nullptr){
20                insertIntoBST(root->left,val);
21            }
22            else{
23                root->left = new TreeNode(val);
24            }
25    }
26    
27    return root;
28    }
29};