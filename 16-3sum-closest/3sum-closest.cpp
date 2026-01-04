class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        int n = v.size();
        sort(v.begin(),v.end());

        int sum = 0;
        int closestsum = v[0]+v[1]+v[2];
        vector<int> addition;
        //using 2 ptr approch.
        for(int i=0 ; i<n ; i++){
            if(i>0 && v[i] == v[i-1]){
                continue;
            }

            int left = i+1;
            int right = n-1;

            while(left <  right){
                sum = v[i] + v[left] + v[right];

            if(abs(sum-target) < abs(closestsum-target)){
                closestsum = sum;
            }
            if(sum==target){
                left++;
                right--;
                while(left < right && v[left] == v[left+1]){
                    left++;
                }
                while(left < right && v[right] == v[right-1]){
                    right--;
                    }
                }
            
            else if(sum<target){
                left++;
            }
            else if(sum > target){
                right--;
            }
            else{
                return sum;
            }
            }
        }
        return  closestsum;
    }
};