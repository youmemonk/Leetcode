class Solution {
public:
    int countOnes(int n){
        int count = 0;
        while(n > 0){
            if(n & 1) count++;
            n = n >> 1;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i < n + 1; i++){
            int ones = countOnes(i);
            ans.push_back(ones);
        }
        
        return ans;
    }
};