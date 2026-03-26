public class Solution {
    public int MinOperations(string s) {
        int count=0;
        for(int i=0;i<s.Length;++i)
        if(s[i]!='0'+i%2)
        count++;
        return count>s.Length-count?s.Length-count:count;
    }
}