class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            nums[mid] < nums[0] ? right = mid - 1 : left = mid + 1;
        }

        return left == nums.size() ? nums[0] : nums[left];
    }
};