class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size();
        int ans = target[0];

        for(int i=0 ; i<n ; i++){
            if(i>0 && target[i] > target[i-1]){
                ans += (target[i] - target[i-1]);
            }
        }

        return ans;
    }
};