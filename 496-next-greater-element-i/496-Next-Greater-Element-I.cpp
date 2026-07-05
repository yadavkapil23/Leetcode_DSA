class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> v(n);
        stack<int>  st;
        for(int i=n-1 ; i>=0 ; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            if(st.empty()){
                v[i] = -1;
            }

            else{
                v[i] = st.top();
            }

            st.push(nums2[i]);
        }


        vector<int> result;
        for(auto x : nums1){
            for(int j=0 ; j<nums2.size() ; j++){
                if(nums2[j] == x){
                    result.push_back(v[j]);
                }
            }
        }

        return result;
    }
};