class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        //using sorting.
        //sort(v.begin(),v.end());
        int n = v.size();
        int first=-1;
        int last=-1;

        int  low = 0;
        int high = n-1;

        while(low <= high){
            int mid = low + (high-low)/2;
            if(v[mid] == target){
                first = mid; // searched for first , now check whether any other first exists in left or not.
                high = mid-1;
            }
            else if(v[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

            low = 0;
            high = n-1;

            while(low <= high){
                int mid = low + (high-low)/2;
                if(v[mid] == target){
                    last = mid; // now check right to seeany other last exists or not.
                    low = mid+1;
                }
                else if(v[mid] < target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        return {first,last};
    }
};