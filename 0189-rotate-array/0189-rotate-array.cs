public class Solution {
    public void Rotate(int[] nums, int k) {
        int n=nums.Length;
        if(n<=1)return;
        k%=n;
        if(k==0)return;
        Reverse(nums,0,n-1);
        Reverse(nums,0,k-1);
        Reverse(nums,k,n-1);
    }
    private void Reverse(int[] num, int start,int end)
    {
        while(start<end)
            (num[start],num[end])=(num[end--],num[start++]);
    }
}