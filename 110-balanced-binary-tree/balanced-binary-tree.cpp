class Solution {
public:
    int checking(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int left = checking(root->left);
        if(left == -1){
            return left = -1;
        }

        int right = checking(root->right);
        if(right == -1){
            return right = -1;
        }
        if((abs(left - right)) > 1){
            return -1;
        }

        return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        return checking(root) != -1;
    }
};