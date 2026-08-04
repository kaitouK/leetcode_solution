class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int index = 0, size = INT_MAX;
        for (int i = 0; i < strs.size(); ++i)
            size = min(size, (int)strs[i].size());
        string ans = "";
        for (int j = 0; j < size; ++j) {
            char c = strs[0][j];
            for (int i = 1; i < strs.size(); ++i) {
                if (c != strs[i][j])
                    return ans;
            }
            ans += c;
        }
        return ans;
    }
};