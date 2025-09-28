class Solution {
public:
    void sortColors(vector<int>&v) {
        int n = v.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid <= high){
            if(v[mid] == 0){
                swap(v[mid],v[low]);
                low++,mid++;
            }
            else if(v[mid] == 1){
                mid++;
            }
            else if(v[mid] == 2){
                swap(v[mid],v[high]);
                high--;
            }
        }
    }
};