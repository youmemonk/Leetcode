class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int onesCount = 0, zeroToOneFlipCount = 0;
        
        for(int i=0; i<s.size(); i++){
            s[i] == '1'? onesCount++ : zeroToOneFlipCount++;
 
            zeroToOneFlipCount = min(onesCount, zeroToOneFlipCount);
        }
        return zeroToOneFlipCount;
    }
};