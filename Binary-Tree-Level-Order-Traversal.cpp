1class Solution {
2public:
3    void levelorder(TreeNode* root,vector<vector<int>> &ans){
4        if(root == nullptr){
5            return;
6        }
7
8        queue<TreeNode*> q;
9        q.push(root);
10
11        while(!q.empty()){
12            int size = q.size();
13            vector<int> result;
14
15
16            for(int i=0 ; i<size ; i++){
17            TreeNode* curr = q.front();
18            q.pop();
19
20            result.push_back(curr->val);
21            if(curr->left != nullptr){
22                q.push(curr->left);
23            }
24            if(curr->right != nullptr){
25                q.push(curr->right);
26            }
27        }
28            ans.push_back(result);
29        }
30    }
31    vector<vector<int>> levelOrder(TreeNode* root) {
32        vector<int> result;
33        vector<vector<int>> ans;
34        levelorder(root,ans);
35        return ans;
36    }
37};