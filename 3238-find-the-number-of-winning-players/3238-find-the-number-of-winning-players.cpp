class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>>greedy(n,vector<int>(11,0));
        vector<int> common(n,0);
        int ans=0;
        for(const auto &y:pick){
            greedy[y[0]][y[1]]++;
            common[y[0]]=common[y[0]]>greedy[y[0]][y[1]]?common[y[0]]:greedy[y[0]][y[1]];
        }

        for(int i=0;i<n;++i)
        if(common[i]>i)ans++;
        return ans;
    }
};