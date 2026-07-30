class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto &x: strs){
            vector<int> alpha(26,0);
            for(auto y:x){
                alpha[y-'a']++;
            }
            string key;
            for(int i=0;i<26;++i)
            {
                key+="#"+to_string(alpha[i]);
            }
            mp[key].push_back(x);
        }
        vector<vector<string>> ans;
        for(const auto&[key,val]:mp)
        ans.push_back(val);
        return ans;
    }
};