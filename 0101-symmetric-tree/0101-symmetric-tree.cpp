class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }

        return isMirror(root->left,root->right);
    }

    bool isMirror(TreeNode* left,TreeNode* right){
        if (left == NULL && right == NULL) {
            return true;
        }

        if (left == NULL && right != NULL) {
            return false;
        }
        if (left != NULL && right == NULL) {
            return false;
        }

        if (left->val != right->val) {
            return false;
        }

        bool outside = isMirror(left ->left,right->right);
        bool inside = isMirror(left->right , right->left);


        if(outside && inside){
            return true;
        }
        else{
            return false;
        }
    }
};