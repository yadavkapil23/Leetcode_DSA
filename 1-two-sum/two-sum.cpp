class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();

    vector<pair<int,int>> result;

    for(int i=0 ; i<n ; i++){
        result.push_back({v[i],i});
    }
    int l = 0;
    int r = n-1;

    sort(result.begin(),result.end());

    while(l<r){
    int sum = result[l].first + result[r].first;
    if(sum == target){
        return {result[l].second,result[r].second};
    }
    else if(sum < target){
        l++;
    }
    else{
        r--;
    }
    }
    return {};
    }
};