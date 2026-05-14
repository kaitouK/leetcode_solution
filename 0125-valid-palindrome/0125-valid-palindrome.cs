public class Solution {
    public bool IsPalindrome(string s) {
        var s1=new StringBuilder();
        foreach (char c in s){
            if(Char.IsLetterOrDigit(c))
            {
            if(Char.IsLower(c)){
                s1.Append(c);
            }
            else{
                s1.Append(Char.ToLower(c));
            }
            }
        }
        int left=0,right=s1.Length-1;
        while(left<right)
        {
            if(s1[left++]!=s1[right--])
            return false;
        }
        return true;
    }
}