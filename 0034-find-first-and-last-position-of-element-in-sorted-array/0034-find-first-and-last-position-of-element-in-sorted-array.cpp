class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int n = v.size();
        int first = -1;
        int last = -1;
        for (int i = 0; i < n; ++i) {
            if (v[i] == target) {
                if (first == -1) 
                first = i;
                last = i;
            }
        }
        return {first, last};   
    }
};
