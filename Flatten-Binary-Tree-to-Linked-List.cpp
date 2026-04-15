1class Solution {
2public:
3    void flatten(TreeNode* root) {
4        if(root==nullptr){
5            return;
6        }
7
8        stack<TreeNode*> st;
9
10        st.push(root);
11        while(!st.empty()){
12            TreeNode* curr = st.top();
13            st.pop();
14
15            if(curr->right){
16                st.push(curr->right);
17            }
18            
19            if(curr->left){
20                st.push(curr->left);
21            }
22
23            if(!st.empty()){
24                curr->right = st.top();
25            }
26
27            curr->left = nullptr;
28        }
29    }
30};