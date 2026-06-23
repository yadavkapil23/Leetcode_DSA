1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long long first = LLONG_MIN;
5        long long second = LLONG_MIN;
6        long long third = LLONG_MIN;
7
8        for (int num : nums) {
9            if (num == first || num == second || num == third)
10                continue;
11
12            if (num > first) {
13                third = second;
14                second = first;
15                first = num;
16            } else if (num > second) {
17                third = second;
18                second = num;
19            } else if (num > third) {
20                third = num;
21            }
22        }
23
24        return third == LLONG_MIN ? first : third;
25    }
26};