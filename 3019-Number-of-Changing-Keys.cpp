class Solution {
public:
    int countKeyChanges(string s) {
    for (char& c : s) {
        c = tolower(static_cast<unsigned char>(c));
    }

    int count = 0;

        for(int i=0 ; i<s.size() ; i++){
            if(i > 0 && s[i] != s[i-1]){
                count++;
            }
        }

        return count;
    }
};