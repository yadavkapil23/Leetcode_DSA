1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6        vector<int> ans;
7
8        int left = 0;
9        int right = n-1;
10        int top = 0;
11        int bottom = m-1;
12        while(left <= right && top <= bottom){
13            for(int i=left ; i<=right ; i++){
14                ans.push_back(matrix[top][i]);
15            }
16                top++;
17
18            for(int i=top ; i<= bottom ; i++){
19                ans.push_back(matrix[i][right]);
20            }
21            right--;
22
23            if(top <= bottom){
24            for(int i=right ; i>=left ; i--){
25                ans.push_back(matrix[bottom][i]);
26            }
27            bottom--;
28            }
29
30            if(left<=right){
31            for(int i=bottom ; i>=top ; i--){
32                ans.push_back(matrix[i][left]);
33            }
34            left++;
35            }
36        }
37
38        return ans;
39    }
40};