class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0)
            return;
        if (m == 0) {
            nums1 = nums2;
            return;
        }
        for (int i = 0; i < n; ++i) {
            int left = 0, right = m + i - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                    nums1[mid] >= nums2[i] ? right = mid - 1 : left = mid + 1;
            }
            shift(nums1, left, m + i);
            nums1[left] = nums2[i];
        }
    }
    void shift(vector<int>& nums1, int left, int right) {
        while (left < right) {
            swap(nums1[right], nums1[right - 1]);
            right--;
        }
    }
};