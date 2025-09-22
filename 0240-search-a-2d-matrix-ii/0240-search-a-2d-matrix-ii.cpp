class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0) return false;
        
        int m = matrix[0].size();
        if (m == 0) return false;
        
        int left = 0;
        int right = n * m - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int mid_val = matrix[mid / m][mid % m];
            
            if (mid_val == target) return true;
            else if (mid_val < target) left = mid + 1;
            else right = mid - 1;
        }
        
        return false;
    }
};