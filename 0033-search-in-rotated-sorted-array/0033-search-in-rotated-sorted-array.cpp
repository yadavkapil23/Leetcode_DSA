class Solution {
public:
    int search(vector<int>& v, int target) {
        int n = v.size();
         if (n == 0){
        return -1;
    }

    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = left + (right-left)/2;

        if(v[mid] == target){
            return mid;
        }

        //GOING TO THE LEFT HALF.
        else if(v[left] <= v[mid]){
            if(target >= v[left] && target < v[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }

        //GOING TO THE RIGHT HALF.
        else if(v[right] > v[mid]){
            if(target <= v[right] && target > v[mid]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }

    }
    return -1;
}
};