class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        else if(n < 0){
            x = 1/x;
            n = abs(n);
        }
        
        double subp = myPow(x*x, n/2);
        return (n&1) ? x * subp : subp;
    }
};