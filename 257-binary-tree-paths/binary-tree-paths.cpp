class Solution {
public:
    void all(TreeNode* root,string path,vector<string> &ans){
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(path);
            return;
        }

        if(root->left){
        all(root->left,path+"->"+to_string(root->left->val),ans);
        }

        if(root->right){
        all(root->right,path+"->"+to_string(root->right->val),ans);
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path = to_string(root->val);

        all(root,path,ans);
        return ans;
    }
};