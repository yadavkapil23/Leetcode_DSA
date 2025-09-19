class Solution {
public:
    int findMin(vector<int>&v){
        int n = v.size();
        //int k = k%n;
        //reverse(v.begin(),v.begin()+k);
        int left = 0;
        int right = n-1;
        int ans = INT_MAX;

        while(left <= right){
            int mid = left + (right-left)/2;

            //if left half is sorted.
            if(v[left] <= v[mid]){
                ans= min(ans,v[left]);
                left = mid+1;
            }
            else{
                ans = min(ans,v[mid]);
                right = mid-1;
            }
        }
        return ans;
    }
};