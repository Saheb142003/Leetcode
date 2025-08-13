class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m = grid.size();
        int n = grid[0].size();
        if (x < 0 || y < 0 || x + k > m || y + k > n) {
        return grid;
        }
        int top = x;
        int bottom = x+k-1;
        
        while(top<bottom){
            for(int j=y; j<(y+k);j++){
                swap(grid[top][j], grid[bottom][j]);
            }
            top++;
            bottom--;
        }

    return grid;
    }
};