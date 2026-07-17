class Solution {
public:
    vector<int> findNSE(vector<int> &heights){
    int n =heights.size();
    vector<int> nse(n);
    stack<int> st;
    for(int i=n-1 ; i>=0 ; i--){
        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            nse[i] = n;
        }
        else{
            nse[i] = st.top();
        }
        st.push(i);
    }
    return nse;
}
vector<int> findPSE(vector<int>& heights) {
    int n = heights.size();
    vector<int> result(n);
    stack<int> st;

    for(int i=0 ; i<n ; i++){
        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            result[i] = -1;
        }
        else{
            result[i] = st.top();
        }
        st.push(i);
    }
    return result;
}
    int largestRectangleArea(vector<int>& heights) {
    vector<int> nse = findNSE(heights);  
    vector<int> pse = findPSE(heights);

    int n = heights.size();
    int maxi = 0;
    for(int i=0 ; i<n ; i++){
        maxi = max(maxi,heights[i] * (nse[i] - pse[i] -1));
    }  

    return maxi;
    }
};