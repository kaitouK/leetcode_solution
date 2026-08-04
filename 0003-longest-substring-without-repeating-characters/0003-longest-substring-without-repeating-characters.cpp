class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, index = 0, ans = 0;
        while (index < s.size()) {
            if (mp.find(s[index]) != mp.end() && mp[s[index]] >= left) {
                left = mp[s[index]] + 1;
            }

            ans = max(ans, index - left+1);
            mp[s[index]] = index;
            index++;
        }
        return ans;
    }
};