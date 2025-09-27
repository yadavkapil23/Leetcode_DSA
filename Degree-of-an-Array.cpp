class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> firstOccurrence;
        unordered_map<int, int> lastOccurrence;
        unordered_map<int, int> frequency;
        
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (firstOccurrence.find(num) == firstOccurrence.end()) {
                firstOccurrence[num] = i;
            }
            lastOccurrence[num] = i;
            frequency[num]++;
        }
        
        int maxFreq = 0;
        for (auto& [num, freq] : frequency) {
            maxFreq = max(maxFreq, freq);
        }
        int minLength = INT_MAX;
        
        for (auto& [num, freq] : frequency) {
            if (freq == maxFreq) {
                int length = lastOccurrence[num] - firstOccurrence[num] + 1;
                minLength = min(minLength, length);
            }
        }
        
        return minLength;
    }
};