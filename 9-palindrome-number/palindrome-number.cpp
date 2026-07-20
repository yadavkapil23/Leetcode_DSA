class Solution {
public:
    bool funct(string s,int i,int j){
        if(i>=j){
            return true;
        }
        if(s[i] != s[j]){
            return false;
        }

       return funct(s,i+1,j-1);
    }
    bool isPalindrome(int x) {
    string s = to_string(x);
    int n = s.size();
    int i=0;
    int j=n-1;

    return funct(s,i,j);
    }
};