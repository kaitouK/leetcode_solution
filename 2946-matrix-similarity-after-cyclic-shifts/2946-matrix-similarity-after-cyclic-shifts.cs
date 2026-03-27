public class Solution {
    public bool AreSimilar(int[][] mat, int k) {
        int n=mat.Length,m=mat[0].Length;
        k%=m;
        if(k==0)
        return true;
        int[][]newmat=new int[n][];
        for(int i=0;i<n;++i)
        newmat[i]=(int[])mat[i].Clone();
        
        // 3 step rotation
        for(int i=0;i<n;++i){
            if(i%2==0)//left rotate k times
            {
                Reverse(newmat[i],0,k-1);
                Reverse(newmat[i],k,m-1);
                Reverse(newmat[i],0,m-1);
            }
            else//right rotate k times;
            {
                Reverse(newmat[i],0,m-1);
                Reverse(newmat[i],0,k-1);
                Reverse(newmat[i],k,m-1);
            }
        }
        for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        if(mat[i][j]!=newmat[i][j])
        return false;
        return true;
    }
    private void Reverse(int[] arr,int start,int end)
    {
        while(start<end){
            (arr[start],arr[end])=(arr[end],arr[start]);
            ++start;
            --end;
        }

    }
}