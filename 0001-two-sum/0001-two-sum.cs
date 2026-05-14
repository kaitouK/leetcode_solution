public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        var hash=new Dictionary<int,int>();
        for(int i=0;i<nums.Length;++i){
            if(hash.ContainsKey(nums[i]))
            {
                return new[] {hash[nums[i]],i};
            }
            else
            {
                if(!hash.ContainsKey(target-nums[i]))
                hash.Add(target-nums[i],i);
            }
        }
        return new[] {-1,-1};
    }
}