class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> x;
        int cand1 = -1;
        int cand2 = -1;
        int cnt1 = 0;
        int cnt2 = 0;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(cand1 == nums[i]){
                cnt1++;
            }

           else if(cand2 == nums[i]){
                cnt2++;
            }

           else if(cnt1 == 0){
                cand1 = nums[i];
                cnt1 = 1;
            }

           else if(cnt2 == 0){
                cand2 = nums[i];
                cnt2=1;
            }

            else{
                cnt1--;
                cnt2--;
            }
        }

        int actualcount1 = 0;
        int actualcount2 = 0;

        for(int i=0 ; i<n ; i++){
            if(nums[i] == cand1){
                actualcount1++;
            }

            else if(nums[i] == cand2){
                actualcount2++;
            }
        }

        if(actualcount1 > n/3){
            x.push_back(cand1);
        }

        if(actualcount2 > n/3){
            x.push_back(cand2);
        }

        return x;
    }
};