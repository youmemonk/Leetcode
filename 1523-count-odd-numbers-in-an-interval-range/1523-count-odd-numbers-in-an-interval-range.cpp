class Solution {
public:
    int countOdds(int low, int high) {
        int n = high - low +1;        
        return (low % 2 !=0 && high % 2 != 0) ? n/2 + 1 : n/2;
    }
};