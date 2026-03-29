public class Solution {
    public bool CanBeEqual(string s1, string s2) {
        char[] c1=s1.ToCharArray();
        char[] c2=s2.ToCharArray();
        if(c1.SequenceEqual(c2))return true;
        swap(c1,0,2);
        if(c1.SequenceEqual(c2))return true;
        swap(c1,1,3);
        if(c1.SequenceEqual(c2))return true;
        swap(c1,0,2);
        if(c1.SequenceEqual(c2))return true;
        return false;
    }
    private void swap(char[] s1,int i, int j){
        (s1[i],s1[j])=(s1[j],s1[i]);
    }
}