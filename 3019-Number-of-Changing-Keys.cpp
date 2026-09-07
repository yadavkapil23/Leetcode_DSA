class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        for(int i=0 ; i<s.size() ; i++){
            if(i > 0 && tolower(s[i]) != tolower(s[i-1])){
                count++;
            }
        }

        return count;
    }
};