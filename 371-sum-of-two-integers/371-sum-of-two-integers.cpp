class Solution {
public:
    int getSum(int a, int b) {
        unsigned carry;
        while(b){
            carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        
        return a;
    }
};