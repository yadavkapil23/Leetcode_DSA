class Solution {
public:
    int minAddToMakeValid(string s) {
       int n = s.size();
       stack<char> st;

       for(char c : s){
        if(!st.empty() && st.top() == '(' && c == ')'){
            st.pop();
        }
        else{
        st.push(c);
       } 
       }

       return st.size();
    }
};