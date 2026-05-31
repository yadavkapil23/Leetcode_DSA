1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        //two pointer.
6        int i=0;
7        for(int j=i+1 ; j<n ; j++){
8            if(nums[j] != nums[i]){
9                i++;
10                nums[i] = nums[j];
11            }
12        }
13        return i+1; // i jha jakr rukega vho last unoque element hoga
14    }
15};