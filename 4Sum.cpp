class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        vector<vector<int>> res;
        if(v.size() < 4) 
        return {};
        sort(v.begin(),v.end());
        for(int i=0 ; i<v.size()-3 ; i++){
            if(i>0 && v[i] == v[i-1]){
                continue;
            }
            for(int j=i+1 ; j<v.size()-2 ; j++){
            if(j>i+1 && v[j] == v[j-1]){
                continue;
            }
            int left = j+1;
            int right = v.size()-1;
            while(left < right){
                long long sum = (long long)v[i] + (long long)v[j] + (long long)v[left] + (long long)v[right];

                
                if(sum == target){
                    res.push_back({v[i],v[j],v[left],v[right]});
                    while(left < right && left+1 < v.size() && v[left] == v[left+1]) left++;
                        while(left < right && right-1 > j && v[right] == v[right-1]) right--;

                    left++;
                    right--;
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        }
        return res;
    }
};