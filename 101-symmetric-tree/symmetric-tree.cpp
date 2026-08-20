class Solution {
public:
    bool ismirror(TreeNode *left,TreeNode* right){
        if(left == nullptr && right == nullptr){
            return true;
        }

        if(left == nullptr || right == nullptr){
            return false;
        }

        return(left->val  == right->val)
         && ismirror(left->left,right->right) && ismirror(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return false;
        }

        return ismirror(root->left,root->right);
    }
};