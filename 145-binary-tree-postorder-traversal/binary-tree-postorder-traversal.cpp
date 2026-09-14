class Solution {
public:
    vector<int> v;
    void pushing(TreeNode* root){
        if(root == nullptr){
            return;
        }

        if(root->left){
            pushing(root->left);
        }

        if(root->right){
            pushing(root->right);
        }

        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        pushing(root);
        return v;
    }
};