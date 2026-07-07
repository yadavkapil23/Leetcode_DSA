class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int dist;
        int faaltu;
        int target;
        vector<int> pos;
        for(int i=0 ; i<n ; i++){
            if(s[i] == c){
                pos.push_back(i);
            }
        }

        vector<int> ans;


        for(int i=0 ; i<n ; i++){
            int mind = INT_MAX;
            for(int j=0 ; j<pos.size() ; j++){
                dist = abs(pos[j]-i);
                mind = min(mind,dist);
            }
            ans.push_back(mind);
        }

        return ans;
    }
};