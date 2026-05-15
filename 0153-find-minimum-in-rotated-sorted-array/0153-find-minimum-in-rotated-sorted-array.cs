public class Solution {
    public int FindMin(int[] nums) {
        if(nums.Length==1)
        return nums[0];
        int left=0,right=nums.Length-2;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>=nums[0])
            left=mid+1;
            else 
            right=mid-1;
        }
        return nums[left]<nums[0]?nums[left]:nums[0];
    }
}