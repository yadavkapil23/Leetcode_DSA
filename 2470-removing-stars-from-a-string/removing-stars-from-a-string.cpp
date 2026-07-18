class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        string ans = "";
        stack<char> st;
        for(char c : s){
            if(!st.empty()){
                if(c == '*'){
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());

    return ans;
    }
};