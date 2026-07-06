class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        vector<string> rows(numRows);
        if(numRows == 1 || numRows > (int)s.size()){
            return s;
        }
        int currentrow = 0;
        int direction = 1;
        string ans;
        for(char c : s){
            rows[currentrow] += c;

            if(currentrow == 0){
                direction  = 1;
            }

            else if(currentrow == numRows - 1){
                direction = -1;
            }

            currentrow = currentrow +  direction;
        }

        for(int i=0 ; i<rows.size() ; i++){
            ans += rows[i];
        }

        return ans;
    }
};