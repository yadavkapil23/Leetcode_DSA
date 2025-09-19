class Solution {
public:
    int search(vector<int>& v, int target) {
        int n = v.size();
        if(n==0){
            return false;
        }

        
        int left = 0;
        int right = n-1;
        while(left <= right){
            int mid = left + (right-left)/2;

            if(v[mid] == target){
                return true;
            }

            if(v[mid] == v[left] && v[mid] == v[right]){
                left++;
                right--;
                continue;
            }
            
            //is left half is sorted.
            if(v[left] <= v[mid]){
                if(v[left] <= target && target < v[mid]){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }

            //if right half is soted.
            else{
                if(target > v[mid]  && target <= v[right]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }

            }
        }
        return false;
    }
};