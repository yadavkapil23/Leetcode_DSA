class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<vector<int>> x;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int> ans;

            for(int i=0 ; i<n ; i++){
            TreeNode* curr = q.front();
            q.pop();
            ans.push_back(curr->val);

        if(curr->left != nullptr){
            q.push(curr->left);
        }
        if(curr->right != nullptr){
            q.push(curr->right);
        }
       }
       x.push_back(ans);
    }
      return x;
    }
};