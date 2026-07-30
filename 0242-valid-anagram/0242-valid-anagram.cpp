class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alpha(26,0);
        for(auto &x:s)
        alpha[x-'a']++;
        for(auto &y:t){
        alpha[y-'a']--;
        if(alpha[y-'a']<0)
        return false;
        }
        return s.size()==t.size()&&true;
    }
};