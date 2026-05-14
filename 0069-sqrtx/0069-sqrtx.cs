public class Solution {
    public int MySqrt(int x) {
        int left=0,right=x;
        while(left<=right)
        {
            long mid=(left+right)/2;
            if(mid*mid>x)
            {
                right=(int)mid-1;
            }
            else if(mid*mid<x)
            {
                left=(int)mid+1;
            }
            else
            return (int)mid;
        }
        return right;
    }
}