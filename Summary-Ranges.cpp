class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.empty()) return res;
        
        int start = nums[0];
        int prev = nums[0];
        
        for (size_t i = 1; i < nums.size(); ++i) {
            int x = nums[i];
            if (x == prev + 1) {
                prev = x;
            } else {
                if (start == prev) res.push_back(to_string(start));
                else res.push_back(to_string(start) + "->" + to_string(prev));
                start = prev = x;
            }
        }
        
        if (start == prev) res.push_back(to_string(start));
        else res.push_back(to_string(start) + "->" + to_string(prev));
        
        return res;
    }
};