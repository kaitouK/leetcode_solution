class Solution {
public:
    vector<int> path;
    vector<vector<int>> ans;
    int k, n;
    void dfs(int start) {
        if (path.size() == k) {
            ans.push_back(path);
            return;
        }
        int need = k - path.size();
        for (int i = start; i <= n - need + 1; ++i) {
            path.push_back(i);
            dfs(i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int _n, int _k) {
        k = _k, n = _n;
        path.clear();
        ans.clear();
        dfs(1);
        return ans;
    }
};