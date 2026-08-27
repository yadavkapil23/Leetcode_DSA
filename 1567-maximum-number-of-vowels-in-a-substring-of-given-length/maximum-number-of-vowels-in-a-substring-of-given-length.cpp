class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int maxcount = 0;
        int count = 0;

        for(int i=0 ; i<k ; i++){
            if(isvowel(s[i])){
                count++;
            }
        }

        maxcount = max(maxcount,count);

        //now sliding from the kth to nth.
        for(int i=k ; i<n ; i++){
            if(isvowel(s[i-k])){
                count--;
            }
            if(isvowel(s[i])){
                count++;
            }
            maxcount = max(maxcount,count);
        }

        return maxcount;
    }
};