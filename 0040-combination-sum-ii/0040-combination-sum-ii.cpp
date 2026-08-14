class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    int target;
    void dfs(vector<int>& c,int start)
    {
        int sum=accumulate(path.begin(),path.end(),0);
        if(sum>=target){
            if (sum==target) ans.push_back(path);
            return;
        }
        for(int i=start;i<c.size();++i){
            if(i>start&&c[i]==c[i-1])continue;
            path.push_back(c[i]);
            dfs(c,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int _target) {
        sort(candidates.begin(),candidates.end());
        target=_target;
        path.clear();
        ans.clear();
        dfs(candidates,0);
        return ans;
    }
};