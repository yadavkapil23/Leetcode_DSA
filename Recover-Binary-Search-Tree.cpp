1class Solution {
2public:
3    TreeNode* prev = nullptr;
4    TreeNode* first = nullptr;
5    TreeNode* second = nullptr;
6    void inorder(TreeNode* root){
7        if(root == nullptr){
8            return;
9        }
10
11        //main logic
12        inorder(root->left);
13        if(prev != nullptr &&(root->val < prev->val)){
14            //
15            if(first == nullptr){
16                first = prev;
17            }
18
19            second = root;
20
21        }
22        prev = root;
23
24        inorder(root->right);
25    }
26    void recoverTree(TreeNode* root) {
27        inorder(root);
28        swap(first->val,second->val);
29    }
30};