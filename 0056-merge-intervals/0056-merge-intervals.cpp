class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v){
        int n  = v.size();

        sort(v.begin(),v.end());

        vector<vector<int>> ans;
        for(int i=0 ; i<n ; i++){
        if(ans.empty() || v[i][0] > ans.back()[1]){ //if start of current > last end. , add current interval.
            ans.push_back(v[i]);
        }
        else if(v[i][0] <= ans.back()[1]){ //if start of end <= current of prev.
            ans.back()[1] = max(v[i][1],ans.back()[1]); // find maxim of last end.
        }
        }
    return ans;
    }
};