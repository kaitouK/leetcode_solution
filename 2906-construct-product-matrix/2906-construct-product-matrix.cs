public class Solution {
    public int[][] ConstructProductMatrix(int[][] grid) {
        int n=grid.Length,m=grid[0].Length;
        const int mod=12345; 
        long[] suffix=new long[n*m];
        long[] prefix=new long[n*m];
        int[][] ans=new int[n][];
        for(int i=0;i<n;++i)
            ans[i]=new int[m];

        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int index=i*m+j;
                prefix[index]=index==0?grid[i][j]:grid[i][j]*prefix[index-1];
                prefix[index]%=mod;
            }
        }
        for(int i=n-1;i>=0;--i){
            for(int j=m-1;j>=0;--j){
            int index=i*m+j;
            suffix[index]=index==n*m-1?grid[i][j]:grid[i][j]*suffix[index+1];
            suffix[index]%=mod;
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int index=i*m+j;
                if(index==0)
                ans[i][j]=(int)(suffix[index+1]%mod);
                else if(index==n*m-1)
                ans[i][j]=(int)(prefix[index-1]%mod);
                else ans[i][j]=(int)(prefix[index-1]*suffix[index+1]%mod);
            }
        }
        return ans;
    }
}