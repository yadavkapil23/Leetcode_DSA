class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        sort(citations.begin(),citations.end());

        int maxh = 0;
        int count = 0;
        for(int i=0 ; i<n ; i++){
           int h = n-i;
            if(citations[i] >= h){
                count++;
            }
            if(count >= h){
            maxh = max(maxh,count);
            }
        }

        return maxh;
    }
};