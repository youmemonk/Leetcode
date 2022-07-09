class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0, n = nums.size();
        for(int num : nums){
            (num == 1) ? count++ : count = 0;
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};