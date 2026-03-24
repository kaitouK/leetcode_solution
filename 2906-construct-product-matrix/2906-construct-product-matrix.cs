public class Solution {
    public int[][] ConstructProductMatrix(int[][] grid) {
        int n=grid.Length,m=grid[0].Length;
        const int mod=12345; 
        int[][] ans=new int[n][];
        int prefix=1,suffix=1;
        for(int i=0;i<n;++i){
            ans[i]=new int[m];
            for(int j=0;j<m;++j){
                ans[i][j]=prefix;
                prefix=prefix*grid[i][j]%mod;
            }
        }
        for(int i=n-1;i>=0;--i){
            for(int j=m-1;j>=0;--j){
                ans[i][j]=ans[i][j]*suffix%mod;
                suffix=suffix*grid[i][j]%mod;
            }
        }
        return ans;
    }
}