class Solution {
public:
 bool isMagic(vector<vector<int>>& grid, int r, int c, int k) {
        int target = 0;

        // first row sum
        for (int j = 0; j < k; j++)
            target += grid[r][c + j];

        // rows
        for (int i = 0; i < k; i++) {
            int sum = 0;
            for (int j = 0; j < k; j++)
                sum += grid[r + i][c + j];
            if (sum != target) return false;
        }

        // cols
        for (int j = 0; j < k; j++) {
            int sum = 0;
            for (int i = 0; i < k; i++)
                sum += grid[r + i][c + j];
            if (sum != target) return false;
        }

        // diagonals
        int d1 = 0, d2 = 0;
        for (int i = 0; i < k; i++) {
            d1 += grid[r + i][c + i];
            d2 += grid[r + i][c + k - 1 - i];
        }

        return d1 == target && d2 == target;
    }
    int largestMagicSquare(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 1;

        for (int k = 2; k <= min(n, m); k++) {
            for (int i = 0; i + k <= n; i++) {
                for (int j = 0; j + k <= m; j++) {
                    if (isMagic(grid, i, j, k))
                        ans = max(ans, k);
                }
            }
        }
        return ans;
    }
};