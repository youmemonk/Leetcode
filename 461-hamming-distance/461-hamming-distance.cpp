class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int XOR = x ^ y;
        while(XOR){
            if(XOR & 1) count++;
            XOR = XOR >> 1;
        }
        return count;
    }
};