class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int i=0 ; i<arr.size() ; i++){
            mp[arr[i]]++;
        }

        vector<int> v;

        for(auto &p : mp){
            v.push_back(p.second);
        }

        sort(v.begin(),v.end());

        for(int i=0 ; i<v.size() ; i++){
            if(i>0 && v[i] == v[i-1]){
                return false;
            }
        }

        return true;
    }
};