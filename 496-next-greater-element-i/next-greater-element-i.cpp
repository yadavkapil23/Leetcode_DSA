class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=n-1 ; i>=0 ; i--){
            
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            if(st.empty()){
                ans[i] = -1;
            }

            else{
                ans[i] = st.top();
            }

            st.push(nums2[i]);
        }

       vector<int> result;
        for(auto x : nums1){
            for(int j=0 ; j<nums2.size() ; j++){
                if(nums2[j] == x){
                    result.push_back(ans[j]);
                }
            }
        }

        return result;
    }
};