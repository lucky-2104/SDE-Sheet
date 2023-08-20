class Solution {
public:
    double myPow(double x, int n) {

        double ans = 1.0;
        long n1 = n;
        if(n1 < 0 ) n1 = n1*-1;

        while(n1 > 0)
        {
            if(n1 %2 ==0)
            {
                x = (x*x);
                n1 = n1/2;
            }
            else{
                ans = ans*x;
                n1 = n1-1;
            }
        }
        
        if( n < 0)
        return 1.0 /ans;
        else
        return ans;

        
    }
};