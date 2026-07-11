class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c=='A' || c == 'e' || c=='E' ||c == 'i' || c=='I' ||c == 'o' || c=='O' ||c == 'u' || c=='U'){
            return true;
        }
        return false;
    }

    int beautifulSubstrings(string s, int k) {
        int n = s.size();
        int countc = 0;
        int countv = 0;
        int result = 0;

        for(int i=0 ; i<n ; i++){
            countc = 0;
            countv = 0;
            for(int j=i ; j<n ; j++){
                if(isVowel(s[j])){
                    countv++;
                }
                else{
                    countc++;
                }

                if(countc == countv && ((countc*countv) %k ==0)){
                    result += 1;
                }
            }
        }

        return result;
    }
};