class Solution {
public:
    bool checkIfPangram(string sentence) {
        string alph = "abcdefghijklmnopqrstuvwxyz";
        unordered_map<char,int> m(26);

        for(int i=0 ; i<alph.size() ; i++){
            m[alph[i]]++;
        }

        int sents = sentence.size();
        unordered_map<char,int> m1;

        for(int i=0 ; i<sents ; i++){
            m1[sentence[i]]++;
        }

        for(auto& p : m){
            if(m1[p.first] >= p.second){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }
};