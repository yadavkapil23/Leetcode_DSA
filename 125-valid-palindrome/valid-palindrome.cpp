class Solution {
public:  
    bool check(string x){
        string temp = x;
        reverse(x.begin(),x.end());

        if(x == temp){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string x = "";
        for(int i=0 ; i<s.size(); i++){
            if(isalnum(s[i])){
                x.push_back(tolower(s[i]));
            }
            else{
                continue;
            }
        }

        if(check(x)){
            return true;
        }
        return false;
    }
};