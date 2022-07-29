class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        
        for(int i = 0; i < pow(2,n); i++){
            vector<int> ans;
            for(int j = 0; j < n; j++){
                if(i & (1<<j)) ans.push_back(nums[j]);
            }
            
            res.push_back(ans);
        }
        
        return res;
    }
};