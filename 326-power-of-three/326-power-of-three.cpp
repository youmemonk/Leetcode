class Solution {
public:
    bool isPowerOfThree(int n) {
        long num = 1;
        while(num <= n){
            if(num == n) return true;
            num *= 3;
        }
        
        return false;
    }
};