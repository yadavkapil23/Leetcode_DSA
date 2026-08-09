class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if(root == nullptr){
            return {};
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<double> x;

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
            double addition = accumulate(x.begin(),x.end(),0.0);
            double av = addition/x.size();
            ans.push_back(av);
        }

        return ans;
    }
};