class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string result = "";
        int n = num.size();
        for(int i=0 ; i<n ; i++){
         while(!st.empty() && st.top() > num[i] && k!=0){
                    st.pop();
                    k--;
                }
                    st.push(num[i]);
                }
        while (k > 0) {
            st.pop();
            k--;
        }

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(),result.end());

        int i = 0;
        while (i < result.size() && result[i] == '0') {
            i++;
        }

        result = result.substr(i);

        if(result != ""){
            return result;
        }
        
        return "0";
    }
};