class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l1=0,buy=prices[0],mvp=0;
        while(l1<prices.size()){
            if(buy>prices[l1])
            buy=prices[l1++];
            else{
                if(mvp<prices[l1]-buy)
                mvp=prices[l1]-buy;
                l1++;
            }
        }
        return mvp;
    }
};