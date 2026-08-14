class Solution {
public:
    vector<vector<string>> ans;
    vector<string> board;
    vector<bool> col, dia1, dia2;
    int n;
    void backtrack(int row) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (col[i] || dia1[i + row] || dia2[row - i + n])
                continue;
            col[i] = dia1[i + row] = dia2[row - i + n] = true;
            board[row][i] = 'Q';
            backtrack(row + 1);
            col[i] = dia1[i + row] = dia2[row - i + n] = false;
            board[row][i] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int _n) {
        n=_n;
        col.assign(n, false);
        dia1.assign(2 * n, false);
        dia2.assign(2 * n, false);
        board.assign(n, string(n, '.'));
        backtrack(0);
        return ans;
    }
};