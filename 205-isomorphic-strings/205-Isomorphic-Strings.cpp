class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        int n = s.size();
        unordered_map<char,char> st;
        unordered_map<char,char> ts;

        for(int i=0 ; i<n ; i++){
            char c1 = s[i];
            char c2 = t[i];

        if(st.find(c1) != st.end()){
            if(st[c1] != c2){
                return false;
            }
        }
            else{
                st[c1] = c2;
        }

        if(ts.find(c2) != ts.end()){
            if(ts[c2] != c1){
                return false;
            }
        }
            else{
                ts[c2] = c1;
        }
        }

        return true;
    }
};