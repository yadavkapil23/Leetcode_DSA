class Solution {
public:
    bool checking(int nums,int extraCandies,int maxElement){
        int sum = 0;
        sum = nums + extraCandies;

        if(sum >= maxElement){
            return true;
        }

        return false;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans;

        int maxElement = *max_element(candies.begin(), candies.end());

        for(int i=0 ; i<n ; i++){
            if(checking(candies[i],extraCandies,maxElement)){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};