class Solution {
public:
    int mod = 1e9 + 7;
    int nthMagicalNumber(int n, int a, int b) {
        long L = lcm(a, b), C = L/a + L/b - 1, k = (n-1)/C, ans = 0;
        for(int i = 1, j = 1, magicNo = n - k*C; magicNo; magicNo--){
            if(a*i < b*j) ans = a*i++;
            else ans = b*j++;
        }
        
        return (k*L + ans) % mod;
    }
};