1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        // //two pointer.
6        // int i=0;
7        // for(int j=i+1 ; j<n ; j++){
8        //     if(nums[j] != nums[i]){
9        //         i++;
10        //         nums[i] = nums[j];
11        //     }
12        // }
13        // return i+1; // i jha jakr rukega vho last unoque element hoga
14
15
16        //USING SET.
17        // set<int> s(nums.begin(),nums.end());
18
19        // int i=0;
20        // for(int x : s){
21        //     nums[i] = x;
22        //     i++;
23        // }
24
25        // return s.size();
26
27
28
29
30    //USING UNIQUE INBUILT LIBRARY.
31    auto it = unique(nums.begin(),nums.end());
32    nums.erase(it,nums.end());
33    return nums.size();
34    }
35};