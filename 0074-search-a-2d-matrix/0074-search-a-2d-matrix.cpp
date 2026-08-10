class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[mid][0] == target)
                return true;
            else
                target > matrix[mid][0] ? left = mid + 1 : right = mid - 1;
        }
        if (right < 0)
            return false;
        int pivot = right;
        left = 0, right = matrix[pivot].size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[pivot][mid] == target)
                return true;
            else
                target > matrix[pivot][mid] ? left = mid + 1 : right = mid - 1;
        }
        return false;
    }
};