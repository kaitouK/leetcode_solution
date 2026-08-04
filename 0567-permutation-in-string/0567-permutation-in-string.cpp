class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;
        vector<int> need(26, 0), window(26, 0);
        for (const auto& c : s1) {
            need[c - 'a']++;
        }
        int n = s1.size();
        for (int i = 0; i < n; ++i)
            window[s2[i] - 'a']++;
        if (need == window)
            return true;
        for (int i = n; i < s2.size(); ++i) {
            window[s2[i] - 'a']++;
            window[s2[i - n] - 'a']--;
            if (need == window)
                return true;
        }
        return false;
    }
};