1class Solution {
2public:
3    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
4        if(root == nullptr){
5            return nullptr;
6        }
7        else if(root->val == p->val || root->val == q->val){
8            return root;
9        }
10        if(root->val < p->val && root->val < q->val){
11           return lowestCommonAncestor(root->right,p,q);
12        }
13
14        else if(root->val > p->val && root->val > q->val){
15          return  lowestCommonAncestor(root->left,p,q);
16        }
17
18        else if((root->val < p->val && root->val > q->val) || (root->val > p->val && root->val < q->val)){
19            return root;
20        }
21
22        return lowestCommonAncestor(root,p,q);
23    }
24};