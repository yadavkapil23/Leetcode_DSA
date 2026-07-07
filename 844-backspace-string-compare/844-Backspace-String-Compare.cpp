class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;

        for(char c : s){
            if(!st.empty() && c == '#'){
                st.pop();
            }
            else if(st.empty() && c == '#'){
                  continue;
            }
            else{
                st.push(c);
            }
        }

        for(char ch : t){
            if(!st2.empty() && ch == '#'){
                st2.pop();
            }
            else if(st2.empty() && ch == '#'){
                continue;
            }
            else{
                st2.push(ch);
            }
        }

        if(st != st2){
            return false;
        }

        return true;
    }
};