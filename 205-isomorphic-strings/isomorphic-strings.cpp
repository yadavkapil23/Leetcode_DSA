class Solution {
public:
    bool isIsomorphic(string s, string t) {

        char smap[256] = {0};
        char tmap[256] = {0};

        for(int i=0 ; i<s.size() ; i++){
            char a = s[i];
            char b = t[i];

            if(smap[a] == 0){
                smap[a] = b;
            }
            else if(smap[a] != b){
                return false;
            }

            if(tmap[b] == 0){
                tmap[b] = a;
            }
            else if(tmap[b] != a){
                return false;
            }
        }
        return true;
    }
};