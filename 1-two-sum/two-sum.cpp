class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();

        vector<int> result;
        int sum = 0;
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                sum = v[i] + v[j];
            if(sum == target){
                result.push_back(i);
                result.push_back(j);
            }
            }
        }
        return result;
    }
};