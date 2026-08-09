class Solution {
public:
    int  pathsum(TreeNode* root,int &maxi){
        if(root== nullptr){
            return 0;
        }

        int leftist = pathsum(root->left,maxi);
        int rightist = pathsum(root->right,maxi);

        //If child path is negative, don't take it!
        leftist = max(0, leftist);
        rightist = max(0, rightist);


        maxi = max(maxi,leftist+rightist+root->val);

        return root->val + max(leftist,rightist);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        pathsum(root,maxi);

        return maxi;
    }
};