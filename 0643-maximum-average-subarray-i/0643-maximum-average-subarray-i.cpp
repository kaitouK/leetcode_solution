class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int current = 0, sum = 0;
        for (int i = 0; i < k; ++i)
            current += nums[i];
        sum = current;
        for (int i = k; i < nums.size(); ++i) {
            current -= nums[i - k];
            current += nums[i];
            sum = max(current, sum);
        }
        return (double)sum / k;
    }
};