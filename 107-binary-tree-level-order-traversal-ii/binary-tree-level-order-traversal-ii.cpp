class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == nullptr){
            return {};
        }

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            vector<int> x;
            int n = q.size();
            for(int i=0 ; i<n ; i++){
            TreeNode* curr = q.front();
            q.pop();

            x.push_back(curr->val);

            if(curr->left != nullptr){
                q.push(curr->left);
            }
            
            if(curr->right != nullptr){
                q.push(curr->right);
            }
            }
            ans.push_back(x);
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};