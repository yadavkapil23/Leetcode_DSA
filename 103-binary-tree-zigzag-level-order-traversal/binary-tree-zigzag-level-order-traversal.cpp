class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if(root == nullptr){
            return {};
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftoright = true;

        while(!q.empty()){
            vector<int> ans;
            int n = q.size();

            for(int i=0 ; i<n ; i++){
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

            if(!leftoright){
                reverse(ans.begin(),ans.end());
            }

            result.push_back(ans);

            leftoright = !leftoright;
        }

        return result;
    }
};