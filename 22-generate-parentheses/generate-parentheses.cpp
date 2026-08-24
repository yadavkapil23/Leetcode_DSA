class Solution {
public:
    void Generate(int n,vector<string> &v,int open,int close,string s){
        if(close == n){
            v.push_back(s);
            return;
        }

        if(open < n){
            s.push_back('(');
            Generate(n,v,open+1,close,s);
            s.pop_back();
        }

        if(close < open){
            s.push_back(')');
            Generate(n,v,open,close+1,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int open = 0;
        int close = 0;
        string s = "";
        Generate(n,v,open,close,s);
        return v;
    }
};