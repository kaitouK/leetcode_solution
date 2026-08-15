class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    int n;
    void dfs(vector<int>& nums, int start) {
        ans.push_back(path);
        for (int i = start; i < n; ++i) {
            if (i > start && nums[i] == nums[i - 1])
                continue;
            path.push_back(nums[i]);
            dfs(nums, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(), nums.end());
        ans.clear();
        path.clear();
        dfs(nums, 0);
        return ans;
    }
};