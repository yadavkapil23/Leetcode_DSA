1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        vector<int> left(n);
6        vector<int> right(n);
7        int water = 0;
8        left[0] = height[0];
9        for(int i=1 ; i<n ; i++){
10            left[i] = max(left[i-1],height[i]);
11        }
12
13        right[n-1] = height[n-1];
14        for(int i=n-2 ; i>=0 ; i--){
15            right[i] = max(height[i],right[i+1]);
16        }
17
18
19        for(int i=0 ; i<n ; i++){
20            water += min(left[i],right[i]) - height[i];
21        }
22        return water;
23    }
24};