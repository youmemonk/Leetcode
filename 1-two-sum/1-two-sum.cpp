class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        int n = nums.size();
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            hm.insert({nums[i], i});
        }
        
        for(int i = 0; i < n; i++){
            int a = nums[i], b = target - a;
            if(hm.find(b) != hm.end() && hm[b] != i){
                ans.push_back(i);
                ans.push_back(hm[b]);
                break;
            }
        }
        
        return ans;
    }
};