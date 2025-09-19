class Solution {
public:
    int longestConsecutive(vector<int>& v){
        sort(v.begin(),v.end());
        int n = v.size();
        if(n==0){
            return 0;
        }
        int length = 1;
        int maxlen = 1;
        for(int i=1 ; i<n ; i++){
            if(v[i] == v[i-1]){
                continue;
            }
            else if(v[i] == v[i-1] + 1){
                length++;
            }
            else{ //gap in seq.
                maxlen = max(length,maxlen);
                length = 1;  
            }
            }
            maxlen = max(length,maxlen);
            return maxlen;
        } 
};