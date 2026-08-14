class Solution {
public:
    int target, size;
    vector<int> path;
    vector<vector<int>> ans;
    void dfs(vector<int>& candidates, int start) {
        int sum = accumulate(path.begin(), path.end(), 0);
        if (sum >= target) {
            if (sum == target)
                ans.push_back(path);
            return;
        }
        for (int i = start; i < size; ++i) {
            path.push_back(candidates[i]);
            dfs(candidates, i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int _target) {
        target = _target;
        size = candidates.size();
        dfs(candidates,0);
        return ans;
    }
};