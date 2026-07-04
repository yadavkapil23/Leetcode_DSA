class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || (int)s.size() <= numRows){
            return s;
        }
        string result = "";
        vector<string> rows(numRows);
        int currentrow = 0;
        int direction = 1;

        for(char c : s){
            rows[currentrow] += c;
            if(currentrow == 0){
                direction = 1;
            }
            else if(currentrow == numRows-1){
                direction = -1;
            }

            currentrow += direction;
        }

        for(int i=0 ; i<rows.size() ; i++){
            string a = rows[i];
            result += a;
        }

        return result;
    }
};