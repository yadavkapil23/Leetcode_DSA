class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        vector<int> rem;

        for(int i=0 ; i<m ; i++){
            mp[arr1[i]]++;
        }

        for(int i=0 ; i<n ; i++){
            while(mp[arr2[i]] > 0){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }

        //add remaining.

        for(int i=0 ; i<m ; i++){
            while(mp[arr1[i]] > 0){
                rem.push_back(arr1[i]);
                mp[arr1[i]]--;
            }
        }

        sort(rem.begin(),rem.end());

        for(int i=0; i<rem.size() ; i++){
            ans.push_back(rem[i]);
        }

        return ans;
    }
};