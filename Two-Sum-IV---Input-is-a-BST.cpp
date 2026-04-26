1class Solution {
2public:
3    void Value(TreeNode* root,vector<int> &v){
4    
5    if(root == nullptr){
6        return;
7    }
8
9    TreeNode* curr = root;
10    Value(curr->left,v);
11    v.push_back(curr->val);
12    Value(curr->right,v);
13
14    }
15
16    bool findTarget(TreeNode* root, int k) {
17     vector<int> v;
18     bool found = false;
19     Value(root,v);
20    int left = 0;
21    int right = v.size()-1;
22    int sum = 0;
23
24    while(left < right){
25        sum = v[left] + v[right];
26
27        if(sum == k){
28            left++,right--;
29            found = true;
30            return true;
31
32        while(left < right && v[left] == v[left+1]){
33            left++;
34        }
35
36        while(left < right && v[right] == v[right-1]){
37            right--;
38        }
39        }
40
41        else if(sum <  k){
42            left++;
43        }
44        else{
45            right--;
46        }
47    }
48      return false;
49    }
50};