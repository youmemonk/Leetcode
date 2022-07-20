class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0, n = nums.size();
        unordered_map <int, int> hm;
        for(int i = 0; i < n; i++){
            if(hm.find(nums[i]) != hm.end()){
                hm[nums[i]]++;
            }
            else hm.insert({nums[i], 1});
        }
        
        for(int i = 0; i < n; i++){
            if(hm[nums[i]] == 1) sum += nums[i];
        }
        
        return sum;
    }
};