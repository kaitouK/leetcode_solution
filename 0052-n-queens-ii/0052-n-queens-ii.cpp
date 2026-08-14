class Solution {
public:
    int n, count = 0;
    vector<bool> dia1, dia2, col;
    int totalNQueens(int _n) {
        n = _n;
        col.assign(n, false);
        dia1.assign(n * 2, false);
        dia2.assign(n * 2, false);
        dfs(0);
        return count;
    }
    void dfs(int r) {
        if (r == n) {
            ++count;
            return;
        }
        for (int c = 0; c < n; ++c) {
            if (col[c] || dia1[c + r] || dia2[c - r + n])
                continue;
            col[c] = dia1[c + r] = dia2[c - r + n] = true;
            dfs(r + 1);
            col[c] = dia1[c + r] = dia2[c - r + n] = false;
        }
    }
};