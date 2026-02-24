class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();

        unordered_map<int,int> m;
        int compliment;

        for(int i=0 ; i<n ; i++){
        compliment = target - v[i];

        if(m.find(compliment) != m.end()){
            return {m[compliment],i};
        }

        m[v[i]] = i;
        }
        return {};
    }
};