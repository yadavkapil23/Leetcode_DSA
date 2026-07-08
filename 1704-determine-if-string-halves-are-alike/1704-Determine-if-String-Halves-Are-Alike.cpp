class Solution {
public:
    bool isVowel(char c){
        if(c == 'A' ||c == 'a' ||c == 'E' ||c == 'e' ||c == 'I' ||c == 'i' ||c == 'O' ||c == 'o' ||c == 'u' ||c == 'U'){
            return true;
        }

        return false;
    }
    bool halvesAreAlike(string s) {
     int count = 0;
     int count2 = 0;
     int n = s.size();

     string s1 = s.substr(0,n/2);
     string s2 = s.substr(n/2,n);

     for(int i=0 ; i<s1.size() ; i++){
        if(isVowel(s1[i])){
            count++;
        }
     }

    for(int i=0 ; i<s2.size() ; i++){
        if(isVowel(s2[i])){
            count2++;
        }
     }

     if(count == count2){
        return true;
     } 

     return false;
    }
};