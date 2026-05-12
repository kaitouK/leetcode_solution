public class Solution {
    public int[] SeparateDigits(int[] nums) {
        List<int> ans= new List<int>();
        for(int i=nums.Length-1;i>=0;--i){
            int x = nums[i];
            while(x>0){
                ans.Add(x%10);
                x/=10;
            }
        }
        ans.Reverse();
        return ans.ToArray();
    }
}