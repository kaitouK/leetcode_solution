public class Solution {
    public bool CheckString(string s) {
        bool b=false;
        for(int i=0;i<s.Length;++i)
        {
            if(b==false&&s[i]=='b')
            b=true;
            if(b&&s[i]=='a')
            return false;
        }
        return true;
    }
}