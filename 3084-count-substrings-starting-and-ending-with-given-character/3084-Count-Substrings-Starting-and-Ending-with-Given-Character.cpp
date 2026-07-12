class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n = s.size();
       long long substr = 0;
       long long count = 0;

        for(char ch : s){
            if(ch == c){
              substr += (1+count);
              count++;
            }
        }

        return substr;
    }
};