class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        int start = nums[0];
        int end = nums[nums.size()-1];
        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }

        for(int i=start ; i<end ; i++){
            if(mp[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};