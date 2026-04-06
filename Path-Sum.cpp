1class Solution {
2public:
3    int inorder(TreeNode* root,int sum,int targetSum){
4        if(root==nullptr){
5            return false;
6        }
7
8        sum += root->val;
9
10        if(root->left == nullptr && root->right == nullptr){
11            if(sum == targetSum){
12                return true;
13            }
14            else{
15                return false;
16            }
17        }
18
19        bool leftsum = inorder(root->left,sum,targetSum);
20        bool rightsum = inorder(root->right,sum,targetSum);
21
22        return leftsum || rightsum;
23    }
24    bool hasPathSum(TreeNode* root, int targetSum) {
25        int sum = 0;
26        bool result = inorder(root,sum,targetSum);
27        return result;
28    }
29};