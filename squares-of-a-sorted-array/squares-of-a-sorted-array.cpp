class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, k = nums.size() - 1;
        vector<int> ans(nums.size());
        
        while(l <= r){
            if(abs(nums[l]) > abs(nums[r])){
                ans[k--] = pow(nums[l++], 2);
            }
            else{
                ans[k--] = pow(nums[r--], 2);
            }
        }
        
        return ans;
    }
};