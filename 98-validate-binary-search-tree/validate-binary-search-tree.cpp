class Solution {
public:
    bool ischeck(TreeNode* root,long long minval,long long maxval){
        if(root == nullptr){
            return true;
        }

        if(root->val <= minval || root->val >= maxval){
            return false;
        }

        return ischeck(root->left,minval,root->val) && ischeck(root->right,root->val,maxval);
    }
    bool isValidBST(TreeNode* root) {
       return ischeck(root,LLONG_MIN,LLONG_MAX);
    }
};