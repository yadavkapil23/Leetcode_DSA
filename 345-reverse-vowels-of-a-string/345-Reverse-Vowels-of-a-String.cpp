class Solution {
public:
    bool isVowel(char &c){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                return true;
            }

        return false;
    }
    string reverseVowels(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left < right){
            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(isVowel(s[left])){
                right--;
            }
            else{
                left++;
            }
        }

        return s;
    }
};