public class Solution {
    private static Random rand=new Random();
    public int FindKthLargest(int[] nums, int k) {
        int _target=k-1;
        QuickSelect(nums,0,nums.Length-1,ref _target);
        return nums[_target];
    }
    private int RandomizedPartition(int[] arr, int left,int right)
    {
        int pivotIndex=rand.Next(left,right+1);
        Swap(arr,pivotIndex,left);
        return Partition(arr,left,right);
    }
    private void QuickSelect(int[] nums, int left, int right,ref int _target)
    {
        if(left>=right)return;
        int pivot=RandomizedPartition(nums,left,right);
        if(pivot==_target)return;
        if(pivot<_target)QuickSelect(nums,pivot+1,right,ref _target);
        if(pivot>_target)QuickSelect(nums,left,pivot-1,ref _target);
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