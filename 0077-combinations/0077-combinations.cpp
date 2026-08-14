class Solution {
public:
vector<int> path;
vector<vector<int>> ans;
int k,n;
void dfs(int start)
{
    if(path.size()==k)
    {ans.push_back(path);return;}
    for(int i=start;i<=n;++i){
        path.push_back(i);
        dfs(i+1);
        path.pop_back();
    }

}
    vector<vector<int>> combine(int _n, int _k) {
        k=_k,n=_n;
        dfs(1);
        return ans;
        
    }
};