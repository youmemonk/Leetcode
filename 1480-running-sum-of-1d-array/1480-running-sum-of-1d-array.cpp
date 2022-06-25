class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ps;
        int n = nums.size();
        
        ps.push_back(nums[0]);
        for(int i=1; i<n; i++){
            int x = ps[i-1] + nums[i];
            ps.push_back(x);
        }
        
        return ps;
    }
};