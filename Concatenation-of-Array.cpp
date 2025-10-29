class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
    int n = v.size();
    vector<int> final(2*n);
    for(int i=0 ; i<n ; i++){
        final[i] = v[i];
        final[i+n] = v[i];
    }
    return final;
}
};