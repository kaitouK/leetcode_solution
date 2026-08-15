class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    int n;
    vector<bool> used;
    void dfs(vector<int>& nums) {
        if (path.size() == n) {
            ans.push_back(path);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (used[i])
                continue;
            if (i > 0 && nums[i] == nums[i - 1] && (!used[i - 1]))
                continue;
            path.push_back(nums[i]);
            used[i] = true;
            dfs(nums);
            used[i] = false;
            path.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        path.clear();
        ans.clear();
        used.assign(n, false);
        sort(nums.begin(), nums.end());
        dfs(nums);
        return ans;
    }
};