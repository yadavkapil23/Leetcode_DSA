class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count  = 0;
        string res = "";

        int n = strs.size();

        for(int i=0 ; i<strs[0].size() ; i++){
            char c = strs[0][i];
            for(int j=0 ; j<n ; j++){
                if(strs[j][i] != c){
                    return res;
                }
                else{
                   continue;
                }
            }
            res += c;
        }

        return res;
    }
};