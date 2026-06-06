1class Solution {
2public:
3
4   
5    void setZeroes(vector<vector<int>>& matrix) {
6        int n = matrix.size();
7        int m = matrix[0].size(); //cols;
8        vector<int> setrow(n,0);
9        vector<int> setcol(m,0);
10
11
12        for(int i=0 ; i<n ; i++){
13            for(int j=0 ; j<m ; j++){
14                if(matrix[i][j] == 0){
15                    setrow[i]=1;
16                    setcol[j]=1;
17                }
18            }
19        }
20        
21        for(int i=0 ; i<n ; i++){
22            for(int j=0 ; j<m ; j++){
23                if(setrow[i] || setcol[j]){
24                    matrix[i][j] = 0;
25                }
26            }
27        }
28    }
29};
30
31
32
33
34
35
36
37//  void setrows(vector<vector<int>>& matrix,int i,int m){
38//         for(int j=0 ; j<m ; j++){
39//             if(matrix[i][j] != 0){
40//                 matrix[i][j] = -1;
41//             }
42//         }
43//     }
44
45//     void setcols(vector<vector<int>>& matrix,int j,int n){
46//         for(int i=0 ; i<n ; i++){
47//             if(matrix[i][j] != 0){
48//                 matrix[i][j] = -1;
49//             }
50//         }
51//     }
52
53
54//     void finalans(vector<vector<int>>& matrix,vector<int>& torow,vector<int>& tocol,int n,int m){
55//         for(int i=0 ; i<torow.size() ; i++){
56//             for(int j=0 ; j<tocol.size() ; j++){
57//                 if(matrix[i][j] == -1){
58//                     matrix[i][j] = 0;
59//                 }
60//             }
61//         }
62//     }
63//     void setZeroes(vector<vector<int>>& matrix) {
64//         int n = matrix.size();
65//         int m = matrix[0].size(); //cols;
66//         vector<int> torow;
67//         vector<int> tocol;
68
69
70//         for(int i=0 ; i<n ; i++){
71//             for(int j=0 ; j<m ; j++){
72//                 if(matrix[i][j] == 0){
73//                     setrows(matrix,i,m);
74//                     torow.push_back(i);
75//                     setcols(matrix,j,n);
76//                     tocol.push_back(j);
77//                 }
78//             }
79//         }
80//         finalans(matrix,torow,tocol,n,m);
81//     }
82// };