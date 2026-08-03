class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int maxi = -1;

        unordered_map<int,int> m;

        for(int i=0; i<arr.size() ; i++){
            m[arr[i]]++;
        }

        for(auto&p : m){
            if(p.first == p.second){
                maxi = max(maxi,p.first);
            }
        }

        return maxi;
    }
};