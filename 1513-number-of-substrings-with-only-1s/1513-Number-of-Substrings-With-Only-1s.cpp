class Solution {
public:
    int MOD = 1e9+7;
    int numSub(string s) {
     int n = s.size();
     long long count = 0;
     long long consecutive =0 ;

     for(char c : s){
        if(c == '1'){
            consecutive++;
            count = (count + consecutive) % MOD;
        }
        else{
            consecutive = 0;
        }
     }

     return count;
    }
};