class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1) return 1;
        if(n == 0) return 1;
        if(n < 0){
            x = 1/x;
            n = abs(n);
        }
        
        double p = myPow(x*x, n/2);
        if(n % 2 == 0) return p;
        else return x*p;
    }
};