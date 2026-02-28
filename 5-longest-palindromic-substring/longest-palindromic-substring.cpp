class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxlen=1;
        int n = s.size();
        if(n==0){
            return "";
        }
        else if(n==1){
            return s;
        }
        else{
            //for even
            int l;
            int r;
            for(int i=0 ; i<n ; i++){
                l=i;
                r=i;
                while(l>=0 && r<n && s[l]==s[r]){
                    int len = r-l+1;
                    if(len > maxlen){
                        maxlen = len;
                        start = l;
                    }
                    l--;
                    r++;
                }

                //for odd
                l=i;
                r=i+1;
                while(l>=0 && r<n && s[l]==s[r]){
                    int len = r-l+1;
                    if(len>maxlen){
                        maxlen = len;
                        start = l;
                    }
                    l--;
                    r++;
                }
            }
        }

        return s.substr(start,maxlen);
    }
};