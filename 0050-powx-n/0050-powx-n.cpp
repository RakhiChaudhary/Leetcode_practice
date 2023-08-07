class Solution {
public:
    double helper(double x,int n){
        if(n==0)
           return 1.;
        if(n==1)
           return x;
        double ans=helper(x,n/2);
         if(n%2==0)
         return (double) ans * ans;
         else
          return (double) ans * ans*x;
    }
    double myPow(double x, int n) {
        if(n<0)
        x=1./x;
        return helper(x,abs(n));   
    }
};

/*
2^16=2^8*2^8=(2^4*2^4)*(2^4*2^4)=()
2^4=2^2*2^2
2^2=2^1;

*/