public class Solution {
    int _target;
    public int FindKthLargest(int[] nums, int k) {
        _target=k-1;
        QuickSelect(nums,0,nums.Length-1);
        return nums[_target];
    }
    private void QuickSelect(int[] nums, int left, int right)
    {
        if(left>=right)return;
        int pivot=Partition(nums,left,right);
        if(pivot==_target)return;
        if(pivot<_target)QuickSelect(nums,pivot+1,right);
        if(pivot>_target)QuickSelect(nums,left,pivot-1);
    }
    private int Partition(int[] nums, int left,int right)
    {
        int pivot=nums[right];
        int i=(left-1);
        for(int j=left;j<right;++j){
            if(nums[j]>pivot)
            {
                i++;
                Swap(nums,i,j);
            }
        }
        Swap(nums,i+1,right);
        return i+1;
    }
    private void Swap(int[] nums,int a,int b)
    {
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
}