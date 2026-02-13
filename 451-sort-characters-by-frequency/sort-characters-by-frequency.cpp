class Solution {
public:
    string frequencySort(string s) {
            unordered_map<char,int> m;
    
    for(char x : s){
        m[x]++;
    }
    
    vector<pair<char,int>> v(m.begin(),m.end());
    
    sort(v.begin(),v.end(),[](auto &a,auto &b){
        return a.second > b.second;
    });
    
    
    string ans;
    
    for(auto &p : v){
        int a = p.second;
        while(a!=0){
            ans.push_back(p.first);
            a--;
        }
    }

    return ans;
    
    }
};