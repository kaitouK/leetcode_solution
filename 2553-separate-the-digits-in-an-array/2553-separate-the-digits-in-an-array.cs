public class Solution {
    public int[] SeparateDigits(int[] nums) {
        string combined=string.Concat(nums);
        int[] ans = combined.Select(c=>c-'0').ToArray();
        return ans;
    }
}