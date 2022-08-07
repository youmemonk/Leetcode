class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> res;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 != 0) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        
        for(int e : even) res.push_back(e);
        for(int o : odd) res.push_back(o);
        return res;
    }
};