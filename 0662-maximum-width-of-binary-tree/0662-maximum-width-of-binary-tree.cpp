class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }

        long long ans = 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            long long first,last;
            long long first_index = q.front().second;
            int size = q.size();
            
            for(int i=0 ; i<size ; i++){
                long long curr_index = q.front().second-first_index;
                TreeNode* curr = q.front().first;
                q.pop();
                if(i==0) first = curr_index;
                if(i==size-1) last = curr_index;

                if(curr->left){
                    q.push({curr->left,2*curr_index+1});
                }
                if(curr->right){
                    q.push({curr->right,2*curr_index+2});
                }
            }
            ans = max(ans,last-first+1);
        }

        return ans;
    }
};