class Solution {
public:
    bool search(vector<int>& v, int target) {
        int n = v.size();

        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(v[mid] == target){
                return true;
            }
            if(v[low] == v[mid] && v[mid] == v[high]){
                low++;
                high--;
                continue;
            }
            //if left half is sorted.
            if(v[low] <= v[mid]){
                if(target >= v[low] && target < v[mid]){
                    high = mid-1;
                }
            else{
                low = mid+1;
            }
            }
            //if right half is sorted.
           else{
                if(target <= v[high] && target > v[mid]){
                    low = mid+1;
                }
            else{
                high = mid-1;
            }
            }
        }
        return false;
    }
};