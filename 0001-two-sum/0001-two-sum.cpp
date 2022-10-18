class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> us;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            if(us.find(target - nums[i]) == us.end()) us.insert({nums[i], i});
            else {
                v.push_back(i);
                v.push_back(us[target - nums[i]]);
                break;
            }
        }
        
        return v;
    }
};