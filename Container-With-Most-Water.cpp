1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n = height.size();
5
6        int left = 0;
7        int right = n-1;
8        int maxarea = 0;
9        while(left <  right){
10            int left_ht = height[left];
11            int right_ht = height[right];
12            int width = right - left;
13            int ht = min(right_ht,left_ht);
14            int area = width * ht;
15            maxarea = max(area,maxarea);
16
17        if(left_ht < right_ht){
18            left++;
19        }
20        else{
21            right--;
22        }
23        }
24
25        return maxarea;
26    }
27};