class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), count = 0, ans = 0;
        for(int i:nums){
            if(i == 0) count = 0;
            else{
                count++;
                ans = max(ans, count);
            }
        }
        
        return ans;
    }
};