class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans(2);
        
        for(int i = 0; i < n; i++){
            int a = nums[i], b = target - a;
            if(mp.find(b) == mp.end()){
                mp.insert({a, i});
            }
            else{
                ans[0] = i;
                ans[1] = mp[b];
                break;
            }
        }
        
        return ans;
    }
};