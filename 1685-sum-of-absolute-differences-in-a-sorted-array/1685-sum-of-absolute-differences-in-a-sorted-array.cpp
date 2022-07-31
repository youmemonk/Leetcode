class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int sum = 0;
        for(auto num : nums) sum += num;
        
        int lSum = 0, lNum = 0;
        
        for(int i = 0; i < n; i++){
            int rSum = sum - nums[i] - lSum;
            int rNum = n - 1 - lNum;
            ans[i] = (lNum * nums[i] - lSum) + (rSum - rNum * nums[i]);
            lNum++;
            lSum += nums[i];
        }
        
        return ans;
    }
};