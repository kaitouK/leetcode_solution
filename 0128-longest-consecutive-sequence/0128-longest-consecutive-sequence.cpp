class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        int length = 0;
        for (const auto& x : nums)
            set.insert(x);
        for (const auto& x : set) {
            if (!set.count(x - 1)) {
                int current = x, count = 1;

                while (set.count(++current))
                    count++;
                length=length>count?length:count;
            }
        }

        return length;
    }
};