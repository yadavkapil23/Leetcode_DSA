class Solution {
private:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
public:
    string sortVowels(string s) {
    vector<char> vowels;
    
    vector<char> v(s.begin(),s.end());
    
    int n = v.size();
    for(int i=0 ; i<n ; i++){
        if(isVowel(v[i])){
           vowels.push_back(v[i]); 
        }
    }
    
    sort(vowels.begin(),vowels.end());
    
    int  j=0;
    for(int i=0 ; i<n ; i++){
        if(isVowel(v[i])){
        v[i] = vowels[j];
        j++;
        }
    }
    
    string result;
    for(int i=0 ; i<v.size() ; i++){
        result.push_back(v[i]);
    }

    return result;
    }
};