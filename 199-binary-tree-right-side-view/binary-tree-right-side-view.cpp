class Solution {
public:
    void dfs(vector<int> &v,TreeNode* root,int level){
        if(root == nullptr){
            return;
        }

        if(level == v.size()){
            v.push_back(root->val);
        }

        if(root->right){
            dfs(v,root->right,level+1);
        }

        if(root->left){
            dfs(v,root->left,level+1);
        }

    }
    vector<int> rightSideView(TreeNode* root) {
        int level = 0;
        vector<int> v;
        dfs(v,root,level);

        return v;
    }
};