class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        unordered_map<int, int> hmap;
        
        for(int i = 0; i < nums.size(); i++){
            if(hmap.find(target - nums[i]) != hmap.end()){
                ans.push_back(i);
                ans.push_back(hmap[target - nums[i]]);
                break;
            }
            hmap.insert({nums[i], i});
        }
        
        return ans;
    }
};