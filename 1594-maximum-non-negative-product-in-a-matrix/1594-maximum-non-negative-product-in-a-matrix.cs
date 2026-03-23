public class Solution {
    public int MaxProductPath(int[][] grid) {
        //Dynamic Programming
        int n=grid.Length,m=grid[0].Length;
        const int mod=1_000_000_007;
        var result=new(long max,long min)[n][];

        for(int i=0;i<n;++i)
            result[i]=new(long max,long min)[m];

        result[0][0]=(grid[0][0],grid[0][0]);

        for(int i=1;i<n;++i){
            long temp=(long)grid[i][0]*result[i-1][0].max;
            result[i][0]=(temp,temp);
        }
        for(int j=1;j<m;++j){
            long temp=(long)grid[0][j]*result[0][j-1].max;
            result[0][j]=(temp,temp);
        }

        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                long a=grid[i][j]*result[i-1][j].max;
                long b=grid[i][j]*result[i][j-1].max;
                long c=grid[i][j]*result[i-1][j].min;
                long d=grid[i][j]*result[i][j-1].min;
                result[i][j].max=Math.Max(Math.Max(a,c),Math.Max(b,d));
                result[i][j].min=Math.Min(Math.Min(a,c),Math.Min(b,d));
            }
        }
        return result[n-1][m-1].max<0?-1:(int)(result[n-1][m-1].max%mod);
    }
}