class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        string ans = "";
        int first = 0;
        int vsize = spaces.size();
        int second = 0;

        for(int i=0 ; i<n ; i++){
            if(second < vsize && i == spaces[second]){
                ans += " ";
                second++;
            }
            ans.push_back(s[i]);

        }

        return ans;
    }
};