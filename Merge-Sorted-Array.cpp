1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4
5        int i=m-1;
6        int j=n-1;
7        int k = m+n-1;
8        while(i>=0 && j>=0){
9            if(nums1[i] > nums2[j]){
10            nums1[k] = nums1[i];
11            i--;
12        }
13        else{
14            nums1[k] = nums2[j];
15            j--;
16        }
17        k--;
18        }
19
20        while(j>=0){
21            nums1[k] = nums2[j];
22            j--;
23            k--;
24        }
25    }
26};