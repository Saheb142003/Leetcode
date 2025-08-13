class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        if (x < 0 || y < 0 || x + k > grid.size() || y + k > grid[0].size()) {
        return grid;
        }
        int n=x+k-1;
        for (int i = x; i < n; i++) {       
            int j=y;
            while (j < y+k) {           
            swap(grid[i][j], grid[n][j]);
                j++;
            }
            n--;
        }

    return grid;
    }
};