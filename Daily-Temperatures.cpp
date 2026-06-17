1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4    int n = temperatures.size();
5    stack<int> st;
6    vector<int> ans;
7    for(int i=n-1 ; i>=0 ; i--){
8        while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
9            st.pop();
10        }
11
12        if(st.empty()){
13            ans.push_back(0);
14        }
15        else{
16          ans.push_back(st.top()-i);
17        }
18
19        st.push(i);
20    }
21    reverse(ans.begin(),ans.end());
22
23    return ans;
24    }
25};