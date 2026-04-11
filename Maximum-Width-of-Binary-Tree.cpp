1class Solution {
2public:
3    int widthOfBinaryTree(TreeNode* root) {
4        if(root==nullptr){
5            return 0;
6        }
7
8        long long ans = 0;
9        queue<pair<TreeNode*,int>> q;
10        q.push({root,0});
11        while(!q.empty()){
12            long long first,last;
13            long long first_index = q.front().second;
14            int size = q.size();
15            
16            for(int i=0 ; i<size ; i++){
17                long long curr_index = q.front().second-first_index;
18                TreeNode* curr = q.front().first;
19                q.pop();
20                if(i==0) first = curr_index;
21                if(i==size-1) last = curr_index;
22
23                if(curr->left){
24                    q.push({curr->left,2*curr_index+1});
25                }
26                if(curr->right){
27                    q.push({curr->right,2*curr_index+2});
28                }
29            }
30            ans = max(ans,last-first+1);
31        }
32
33        return ans;
34    }
35};