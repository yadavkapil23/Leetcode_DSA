class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";
        
        unordered_map<char, int> targetFreq;
        for (char c : t) {
            targetFreq[c]++;
        }
        
        unordered_map<char, int> windowFreq;
        int required = targetFreq.size(); 
        int formed = 0;  
        int left = 0, right = 0;
        
        int minLen = INT_MAX;
        int minStart = 0;
        
        while (right < s.length()) {
            char c = s[right];
            windowFreq[c]++;
            
            if (targetFreq.count(c) && windowFreq[c] == targetFreq[c]) {
                formed++;
            }
            
            while (left <= right && formed == required) {
                int currentLen = right - left + 1;
                if (currentLen < minLen) {
                    minLen = currentLen;
                    minStart = left;
                }
                
                char leftChar = s[left];
                windowFreq[leftChar]--;
                
                if (targetFreq.count(leftChar) && windowFreq[leftChar] < targetFreq[leftChar]) {
                    formed--;
                }
                
                left++;
            }
            
            right++;
        }
        
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};