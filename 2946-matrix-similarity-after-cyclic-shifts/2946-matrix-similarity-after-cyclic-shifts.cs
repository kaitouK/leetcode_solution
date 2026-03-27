public class Solution {
    public bool AreSimilar(int[][] mat, int k) {
        int n=mat.Length,m=mat[0].Length;
        k%=m;
        if(k==0)
        return true;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(i%2==0)
                {
                    if(mat[i][j]!=mat[i][(j-k+m)%m])return false;
                }
                else
                {
                    if(mat[i][j]!=mat[i][(j+k)%m])return false;
                }
            }
        }
        return true;
    }
}