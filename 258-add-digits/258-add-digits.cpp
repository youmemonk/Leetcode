class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        
        int x = num % 10 + addDigits(num / 10);
        return (x < 10) ? x : addDigits(x);
    }
};