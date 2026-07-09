class Solution {
public:
    bool isFirstcapital(string word){
        int count = 0;
        if(!isupper(word[0])){
            return false;
        }
        for(int i=1 ; i<word.size(); i++){
            if(islower(word[i])){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }


    bool allsmall(string word){
        for(int i=0 ; i<word.size() ; i++){
            if(islower(word[i])){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }

    bool alllarge(string word){
        for(int i=0 ; i<word.size() ; i++){
            if(isupper(word[i])){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }
    bool detectCapitalUse(string word) {
        int n = word.size();

        if(isFirstcapital(word) || allsmall(word) || alllarge(word)){
            return true;
        }

        return false;
    }
};