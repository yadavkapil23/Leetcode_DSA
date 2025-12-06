class Solution {
public:
    string removeKdigits(string num, int k) {
        int l = num.length();
        stack<char> st;
        for(int i=0 ; i<l ; i++){
            while(!st.empty() && st.top() > num[i] && k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
            while(k>0){
                st.pop();
                k--;
            }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        //case to handle zero leading.
        while(res.size()>0 && res[0] == '0'){
            res.erase(res.begin());
        }
        if (res.empty()){
        return "0";
        }
    return res;
    }
};