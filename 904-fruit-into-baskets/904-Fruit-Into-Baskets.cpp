class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;

        int maxlen = INT_MIN;
        int n = fruits.size();
        int left = 0;

        for(int right=0 ; right<n ; right++){
             m[fruits[right]]++;
            while(m.size() > 2){
                m[fruits[left]]--;
                if(m[fruits[left]] == 0){
                    m.erase(fruits[left]);
                }
                left++;
            }

            maxlen = max(maxlen,right-left+1);
        }

        return maxlen;
    }
};