class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int> m;
    unordered_map<char,int> m2;
    
    for(char c : s){
        m[c]++;
    }
    
    for(char a : t){
        m2[a]++;
    }
    
    if(m==m2){
        return true;
    }
    return false;
    }
};