class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        string s = to_string(n);
        for(int x : s){
            v.push_back(x-'0');
        }
        sort(v.begin(),v.end(), greater<int> ());
        if(v.size() < 2){
            return v[0];
        }
        return v[0] * v[1];
    }
};