class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long x1=x,x2=0;
        while(x1>0)
        {
            x2*=10;
            x2+=x1%10;
            x1/=10;
        }
        return x==x2;
    }
};