class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = INT_MIN, count = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            if(i == 0 || nums[i-1] < nums[i]) ans = max(ans, ++count);
            else count = 1;
        }
        
        return ans;
    }
};