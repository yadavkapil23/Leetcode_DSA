class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();

        sort(intervals.begin(),intervals.end());

        ans.push_back(intervals[0]);

        for(int i=1  ; i<n ; i++){
            int a = ans.back()[0];
            int b = ans.back()[1];
            int c = intervals[i][0];
            int d = intervals[i][1];


            if(c <= b){
              int  newstart = min(a,c);
              int  newend = max(b,d);

               ans.pop_back();  // Remove the old merged interval
               ans.push_back({newstart, newend});
            }
            else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};