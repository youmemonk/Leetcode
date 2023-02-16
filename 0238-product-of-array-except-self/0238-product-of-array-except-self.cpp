class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);
        
        for(int i= 0; i < n; i++){
            left[i] = (i == 0) ? 1 : nums[i-1] * left[i-1];
        }
        for(int i = n - 1; i >= 0; i--){
            right[i] = i == n-1 ? 1 : nums[i+1] * right[i+1];
        }
        
        for(int i = 0; i < n; i++){
            ans[i] = left[i] * right[i];
        }
        
        return ans;
    }
};