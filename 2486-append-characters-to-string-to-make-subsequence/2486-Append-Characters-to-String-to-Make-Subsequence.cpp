class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.size();
        int n = t.size();

        int first = 0;
        int second = 0;
        while(first < m && second < n){
            if(s[first] == t[second]){
                second++;
            }
            first++;
        }

        return n-second;
    }
};