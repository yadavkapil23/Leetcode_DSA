class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
    int n =v.size();
    int maxcount = 0;
    int count = 0;

    for(int i=0 ;i< n ; i++){
        if(v[i]==1){
            count += 1;
            maxcount = max(maxcount,count);
        }
        else if(v[i] != 1){
            count = 0;
        }
    }

    return maxcount;
}
};