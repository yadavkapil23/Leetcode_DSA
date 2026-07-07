class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int m = s1.size();
        int n = s2.size();
        if(m>n){
            return false;
        }
        for(int i=0 ; i<=n-m ; i++){
            string substri = s2.substr(i,m);
            sort(substri.begin(),substri.end());

        if(s1 == substri){
            return true;
        }
        }
        return false;
    }
};