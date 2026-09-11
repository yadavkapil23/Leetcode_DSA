class Solution {
public:
    void backtrack(vector<int> & digits,vector<int> &v,vector<bool> &used,set<vector<int>> &ans){

        if(v.size() == 3){
            if(v[2] % 2 == 0)
            ans.insert(v);
            return;
        }

        for(int i=0 ; i<digits.size() ; i++){
            if(used[i] == false){
            if (v.empty() && digits[i] == 0)
                continue;
                v.push_back(digits[i]);
                used[i] = true;
            }
            else{
                continue;
            }
            backtrack(digits,v,used,ans);
            v.pop_back();
            used[i] = false;
        }
    }
    int solution(vector<int> &digits){
        vector<int> v;
        set<vector<int>> ans;
        vector<bool> used(digits.size(),false);
        backtrack(digits,v,used,ans);
        return ans.size();
    }
    int totalNumbers(vector<int>& digits) {
        return solution(digits);
    }
};