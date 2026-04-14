1class Solution {
2public:
3    int countNodes(TreeNode* root) {
4        if(root==nullptr){
5        return 0;
6    }
7    
8    int lh,rh;
9
10    int  count = 1;
11    if(root->left){
12      lh =  countNodes(root->left);
13        count += lh;
14    }
15    
16    if(root->right){
17       rh = countNodes(root->right);
18        count += rh;
19    }
20    
21    return count;      
22    }
23};