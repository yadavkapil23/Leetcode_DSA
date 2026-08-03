class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;

        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                string s1 = to_string(nums[i]);
                string s2 = to_string(nums[j]);
                int Greatestdiv = gcd(s1[0]-'0',s2[s2.size()-1]-'0');
                if(Greatestdiv == 1){
                    count++;
                }
            }
        }

        return count;
    }
};