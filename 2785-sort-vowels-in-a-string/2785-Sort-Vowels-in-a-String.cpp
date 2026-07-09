class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c=='A' || c == 'e' || c=='E' || c == 'i' || c=='I' || c == 'o' || c=='O' || c == 'u' || c=='U'){
            return true;
        }

        return false;
    }
    string sortVowels(string s) {
        vector<char> v;
        int n = s.size();

        for(char c : s){
            if(isVowel(c)){
                v.push_back(c);
            }
        }

        sort(v.begin(),v.end());
        int j=0;
        for(int i=0 ; i<n ; i++){
            if(isVowel(s[i])){
                s[i] = v[j];
                j++;
            }
        }
        return s;
    }
};