class Solution {
public:

    bool solve(string &s, int i, int j) {
    if (i >= j){
        return true;
    }

    if (s[i] != s[j]){
        return false;
    }

    return solve(s, i + 1, j - 1);
}

    string longestPalindrome(string s) {
        int n = s.size();

        int starting=0;
        int maxi = INT_MIN;

        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++){
                if(solve(s,i,j)){
                    if((j-i+1) > maxi){
                        maxi = j-i+1;
                        starting = i;
                    }
                }
            }
        }
        return s.substr(starting,maxi);
    }
};