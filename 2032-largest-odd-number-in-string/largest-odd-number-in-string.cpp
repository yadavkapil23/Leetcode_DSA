class Solution {
public:
    string largestOddNumber(string s) {
    
    int n = s.size();
    
    string temp;
    int index = -1;
    
    for(int i=0 ; i<n ; i++){
       int a = s[i] - '0';
        if(a%2 != 0){
            index = i;
        }
    }

    for(int i=0 ; i<=index ; i++){
        temp += s[i];
    }

    return temp;
    }
};