class Solution {
public:

int islandPerimeter(vector<vector<int>>& grid) {
    if (grid.empty()){
        return 0;
    }
    int rows = grid.size();
    int cols = grid[0].size();
    int perimeter = 0;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == 1) {
                // up
                if (r == 0 || grid[r-1][c] == 0){
                    perimeter++;
                }
                // down
                if (r == rows - 1 || grid[r+1][c] == 0){
                    perimeter++;
                }
                // left
                if (c == 0 || grid[r][c-1] == 0){
                    perimeter++;
                }
                // right
                if (c == cols - 1 || grid[r][c+1] == 0){
                    perimeter++;
                }
            }
        }
    }
    return perimeter;
}
};