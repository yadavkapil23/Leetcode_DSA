class Solution {
public:
    TreeNode* invert(TreeNode* root){
        if(root == nullptr){
            return nullptr;
        }

        if(root->left != nullptr){
            invert(root->left);
        }

        if(root->right != nullptr){
            invert(root->right);
        }

        swap(root->left,root->right);

        return root;
    }
    TreeNode* invertTree(TreeNode* root) {

        return invert(root);

    }
};