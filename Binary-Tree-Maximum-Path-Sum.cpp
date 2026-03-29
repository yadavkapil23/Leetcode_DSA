1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int maxPathSum(TreeNode* root) {
15        int maxi = INT_MIN;
16        maxpath(root,maxi);
17        return maxi;
18    }
19
20    int maxpath(TreeNode* root,int &maxi){
21        if(root==nullptr){
22            return 0;
23        }
24
25        int leftsum = max(0,maxpath(root->left,maxi));  //if the leftsum is neg , make it 0
26        int rightsum = max(0,maxpath(root->right,maxi));
27
28        maxi = max(maxi,root->val+leftsum+rightsum);
29
30        return root->val + max(leftsum,rightsum);
31    }
32};