class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        string merged = goal + goal;
        if(merged.find(s) != string::npos){
            return true;
        }

        return false;
    }
};