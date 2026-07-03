class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        for(int i=n-1 ; i>=0 ; i--){
            while(i>=0 && s[i] != ' '){
                count++;
                i--;
            }

        //    if(i>=0 && count > 0 && s[i] == ' '){
        //         break;
        //     }
        if(count > 0){
            break;
        }
        }
        return count;
    }
};