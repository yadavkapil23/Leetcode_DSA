class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        string ans = "";
        for(int x : s){
            ans.push_back(tolower(x));
        }
        return ans;
    }
};