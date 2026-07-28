class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l1=0,buy=prices[0],mvp=0;
        while(l1<prices.size()){
            buy=min(prices[l1],buy);
            mvp=max(prices[l1++]-buy,mvp);
        }
        return mvp;
    }
};