class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),current=0,mini=0,ans=INT_MIN;
        if(n==1)return nums[0];
        vector<int> prefix(n,0);
        for(int i=0;i<n;++i){
            current+=nums[i];
            prefix[i]+=current;
            
            ans=max(prefix[i]-mini,ans);
            mini=min(prefix[i],mini);
        }
        return ans;
    }
};