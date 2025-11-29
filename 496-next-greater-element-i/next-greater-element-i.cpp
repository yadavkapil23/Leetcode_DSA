class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1,vector<int>& nums2){
        stack<int> st;
        int n = nums2.size();
        vector<int> nge(n);

        for(int i=n-1 ; i>=0 ; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            if(st.empty()){
                nge[i] = -1;
            }

            else{
                nge[i] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> result;
        int x = nums1.size();
        for(int a : nums1){
            for(int i=0 ; i<n ; i++){
                if(nums2[i] == a){
                    result.push_back(nge[i]);
                }
            }
        }
        return result;
    }
};