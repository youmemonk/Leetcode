class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;        
        for(int i=(low % 2 == 0) ? low + 1 : low; i<=high; i += 2) 
            count++;
        return count;
    }
};