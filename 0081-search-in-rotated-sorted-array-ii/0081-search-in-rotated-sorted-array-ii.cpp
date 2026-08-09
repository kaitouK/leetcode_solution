class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return true;
            if (nums[mid] == nums[left] && nums[mid] == nums[right]) {
                left++;
                right--;
            } else if (nums[left] <= nums[mid]) {
                target >= nums[left] && target < nums[mid] ? right = mid - 1
                                                           : left = mid + 1;
            } else {
                target <= nums[right] && target > nums[mid] ? left = mid + 1
                                                            : right = mid - 1;
            }
        }
        return false;
    }
};