1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> first;
7        vector<int> second;
8
9        for(int i=0 ; i<n ; i++){
10            if(nums[i] > 0){
11                first.push_back(nums[i]);
12            }
13            else{
14                second.push_back(nums[i]);
15            }
16        }
17
18        //now next operation.
19        vector<int> final;
20        for(int i=0 ; i<n/2 ; i++){
21            final.push_back(first[i]);
22            final.push_back(second[i]);
23        }
24
25        return final;
26    }
27};