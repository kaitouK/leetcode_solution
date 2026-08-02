class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size(),right=n-1,left=0;
        vector<int>dp(n,0);
        int i=0;
        while(left!=right)
        {
            int pick=0;
            if(max(piles[left+1],piles[right])<max(piles[right-1],piles[left]))
                pick=piles[left++];
            else pick=piles[right--];
            dp[i]=i-2<0?pick:pick+dp[i-2];
            i++;
        }
        return dp[n-2]>dp[n-1];
    }
};