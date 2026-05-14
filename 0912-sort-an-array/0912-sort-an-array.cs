public class Solution {
    private static Random rand=new Random();
    public int[] SortArray(int[] nums) {
        QuickSort(nums,0,nums.Length-1);
        return nums;
    }
    private int RandomizedPartition(int[] arr, int left,int right)
    {
        int pivotIndex=rand.Next(left,right+1);
        Swap(arr,pivotIndex,left);
        return Partition(arr,left,right);
    }
    private void QuickSort(int[] arr,int left,int right)
    {
        if(left<right)
        {
            int pivot=RandomizedPartition(arr,left,right);
            QuickSort(arr,left,pivot-1);
            QuickSort(arr,pivot+1,right);
        }
    }
    private int Partition(int[] arr,int left,int right)
    {
        int pivot=arr[right];
        int i=(left-1);
        for(int j=left;j<right;++j)
        {
            if(arr[j]<pivot)
            {
                i++;
                Swap(arr,i,j);
            }
        }
        Swap(arr,i+1,right);
        return i+1;
    }
    private void Swap(int[] arr,int a,int b)
    {
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
}