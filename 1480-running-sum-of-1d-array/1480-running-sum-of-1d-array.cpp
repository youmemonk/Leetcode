class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int> sums;
        
        for(int i=0; i<n; i++){
            sum += nums[i];
            sums.push_back(sum);
        }
        
        return sums;
    }
};