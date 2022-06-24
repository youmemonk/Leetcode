class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_val = INT_MIN;
        int n = nums.size();
        int sum = 0;
        
        for(int i=0; i<n; i++){
            if(sum < 0) sum = 0;
            
            sum = sum + nums[i];
            max_val = max(max_val, sum);            
        }
        
        return max_val;
        
    }
};