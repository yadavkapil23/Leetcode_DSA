class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr){
            return 0;
        }
        vector<int> ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            ans.push_back(curr->val);

            if(curr->left){
                q.push(curr->left);
            }

            if(curr->right){
                q.push(curr->right);
            }
        }

        //
        sort(ans.begin(),ans.end());

        return ans[k-1];
    }
};