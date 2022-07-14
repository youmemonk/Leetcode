class Solution {
public:
    int findComplement(int num) {
        int n = 0, a = num;
        while(a > 0){
            n++;
            a = a / 2;
        }
        
        while(n--){
            num = num ^ (1 << n);
        }
        
        return num;
    }
};