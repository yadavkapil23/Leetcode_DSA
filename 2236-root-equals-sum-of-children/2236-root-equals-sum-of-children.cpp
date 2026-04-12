
class Solution {
public:
    bool checkTree(TreeNode* root) {
      if(root==nullptr){
        return true;
      }  

      if(root->left == nullptr && root->right ==nullptr){
        return true;
      }

      int leftval = 0;
      int rightval = 0;

      if(root->left != nullptr){
        leftval = root->left->val;
      }

      if(root->right != nullptr){
        rightval = root->right->val;
      }

      if(root->val != leftval + rightval){
        return false;
      }

      return checkTree(root->left) && checkTree(root->right);
    }
};