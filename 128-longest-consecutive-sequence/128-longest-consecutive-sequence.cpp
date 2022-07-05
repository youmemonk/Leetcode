class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), maxStreak = INT_MIN;
        if(n <= 1) return n;
        
        set<int> hashSet;
        for(int num : nums){ 
            hashSet.insert(num);
        }
        
        for(int num : nums){
            if(!hashSet.count(num - 1)){
                int currentNum = num, currentStreak = 1;
                
                while(hashSet.count(currentNum + 1)){
                    currentNum++;
                    currentStreak++;
                }
                
                maxStreak = max(maxStreak, currentStreak);
            }
        }
        
        return maxStreak;
            
    }
};