1class Solution {
2public:
3    vector<int> twoSum(vector<int>& v, int target) {
4        int n = v.size();
5
6    vector<int> result;
7
8    int sum = 0;
9    for(int i=0 ; i<n ; i++){
10        for(int j=i+1 ; j<n ; j++){
11            sum = v[i] + v[j];
12            if(sum==target){
13                result.push_back(i);
14                result.push_back(j);
15            }
16        }
17    }
18    return result;
19    }
20};