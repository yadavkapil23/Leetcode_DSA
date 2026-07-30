class Solution {
public:
    int depth(TreeNode* root,int level){
        if(root == nullptr){
            return level-1;
        }

        int left = depth(root->left,level+1);
        int right = depth(root->right,level+1);
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {
        int level = 1;
        return depth(root,level);
    }
};