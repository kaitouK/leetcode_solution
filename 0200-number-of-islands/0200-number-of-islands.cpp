class Solution {
public:
    int m, n;
    void dfs(vector<vector<bool>>& used, vector<vector<char>>& grid, int x,
             int y) {
        if (x >= m || y >= n || x < 0 || y < 0 || grid[x][y] == '0' ||
            used[x][y])
            return;
        used[x][y] = true;
        dfs(used, grid, x, y + 1);
        dfs(used, grid, x + 1, y);
        dfs(used, grid, x, y - 1);
        dfs(used, grid, x - 1, y);
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size(), n = grid[0].size();
        int count = 0;
        vector<vector<bool>> used(m, vector<bool>(n, false));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (used[i][j] || grid[i][j] == '0')
                    continue;
                ++count;
                dfs(used, grid, i, j);
            }
        }
        return count;
    }
};