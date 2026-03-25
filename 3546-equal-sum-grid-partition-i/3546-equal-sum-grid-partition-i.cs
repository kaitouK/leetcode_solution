public class Solution {
    public bool CanPartitionGrid(int[][] grid) {
        int n=grid.Length,m=grid[0].Length;
        if(n==1&&m==1)
        return false;
        long[] vpre=new long[m];//vertical prefix sum array
        long[] hpre=new long[n];//horizontal prefix sum array 
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                hpre[i]+=(long)grid[i][j];
                vpre[j]+=(long)grid[i][j];
            }
        }

        long total=0;//total sum of grid
        foreach(long number in hpre)
        total+=number;

        if(n>1){
            for(int i=0;i<n-1;++i)
            {
                hpre[i]+=i>0?hpre[i-1]:0;
                if(hpre[i]*2==total)
                return true;
            }
        }
        if(m>1){
            for(int j=0;j<m-1;++j)
            {
                vpre[j]+=j>0?vpre[j-1]:0;
                if(vpre[j]*2==total)
                return true;
            }
        }
        return false;
    }
}