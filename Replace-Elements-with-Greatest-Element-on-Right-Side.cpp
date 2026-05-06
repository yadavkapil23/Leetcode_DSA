1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int n = arr.size();
5        vector<int> ans;
6        int maxval = -1;
7        for(int i=n-1 ; i>=0 ; i--){
8            ans.push_back(maxval);
9            maxval = max(maxval,arr[i]);
10        }
11
12        //bcz we have used push back , which pushes the maxelement of thelastto the fonrt.
13        reverse(ans.begin(),ans.end());
14        return ans;
15    }
16};