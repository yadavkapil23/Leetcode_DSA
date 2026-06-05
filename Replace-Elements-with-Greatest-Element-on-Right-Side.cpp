1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        vector<int> ans;
5        int n = arr.size();
6        int maxelement = -1;
7
8        for(int i=n-1 ; i>=0 ; i--){
9            ans.push_back(maxelement);
10            maxelement = max(maxelement,arr[i]);
11        }
12
13        reverse(ans.begin(),ans.end());
14        return ans;
15    }
16};