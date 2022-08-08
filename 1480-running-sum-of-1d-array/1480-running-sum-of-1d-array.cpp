class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ps(nums.size());
        for(int i = 0; i < nums.size(); i++){
            (i == 0) ? ps[i] = nums[i] : ps[i] = ps[i-1] + nums[i];
        }
        
        return ps;
    }
};