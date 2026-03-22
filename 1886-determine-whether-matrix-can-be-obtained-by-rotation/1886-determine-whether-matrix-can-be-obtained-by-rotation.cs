public class Solution {
    public static void Rotation(int[][] mat){
        int n=mat.Length;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
        foreach(int[] array in mat){
            Array.Reverse(array);
        }
    }
    public bool FindRotation(int[][] mat, int[][] target) {
        int n=mat.Length;
        bool isfalse=false;
        for(int i=0;i<4;++i){
            for(int j=0;j<n;++j){
                for(int k=0;k<n;++k){
                    if(mat[j][k]!=target[j][k])
                    {
                        isfalse=true;
                        break;
                    }
                }
                if(isfalse)
                {
                    Rotation(mat);
                    break;
                }
            }
            if(!isfalse)
            return true;
            else isfalse=false;
        }
        return false;
    }
}