class Solution {
public:
    int maxi  = 0;
    int maxdepth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int left = maxdepth(root->left);
        int right = maxdepth(root->right);

        maxi = max(maxi,left+right);

        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        maxdepth(root);
        return maxi;
    }
};