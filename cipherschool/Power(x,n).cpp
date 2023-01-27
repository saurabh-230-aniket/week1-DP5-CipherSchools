class Solution {
public:
    double rec(double x,int n){
        if(n==0)
            return 1.0;
        double a=rec(x,n/2);
        double ans;
        if(n%2!=0)
            ans=a*a*x;
        else
            ans=a*a;
        return ans;
    
    }
    double myPow(double x, int n) {
        if(n<0) return 1.0/rec(x,n);
        else return rec(x,n);
    }
};