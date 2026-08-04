class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if(root == nullptr){
            return {};
        }

        queue<TreeNode*> q;
        q.push(root);
        bool islefttoright = true;

        while(!q.empty()){
            vector<int> ans;
            int queuelen = q.size();
            for(int i=0 ; i<queuelen ; i++){
            TreeNode* element = q.front();
            q.pop();

            ans.push_back(element->val);
            if(element->left != nullptr){
                q.push(element->left);
            }

            if(element->right != nullptr){
                q.push(element->right);
            }
            }

            if(!islefttoright){
                reverse(ans.begin(),ans.end());
            }

            result.push_back(ans);

            islefttoright = !islefttoright;
            }

        return result;
    }
};