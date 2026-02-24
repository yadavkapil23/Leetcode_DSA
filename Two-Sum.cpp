1class Solution {
2public:
3    vector<int> twoSum(vector<int>& v, int target) {
4        int n = v.size();
5
6    vector<pair<int,int>> result;
7
8    for(int i=0 ; i<n ; i++){
9        result.push_back({v[i],i});
10    }
11    int l = 0;
12    int r = n-1;
13
14    sort(result.begin(),result.end());
15
16    while(l<r){
17    int sum = result[l].first + result[r].first;
18    if(sum == target){
19        return {result[l].second,result[r].second};
20    }
21    else if(sum < target){
22        l++;
23    }
24    else{
25        r--;
26    }
27    }
28    return {};
29    }
30};