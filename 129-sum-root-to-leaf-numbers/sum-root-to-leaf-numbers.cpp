
class Solution {
public:
    int sum = 0;
    int sumof(TreeNode* root,int value){
        if(root == nullptr){
            return 0;
        }

        value = (value * 10) + root->val;

        if(root->left == nullptr && root->right == nullptr){
            sum +=  value;
        }

        int left = sumof(root->left,value);

        int right = sumof(root->right,value);

        return sum;
    }
    int sumNumbers(TreeNode* root) {
        int value = 0;
       return sumof(root,value);
    }
};