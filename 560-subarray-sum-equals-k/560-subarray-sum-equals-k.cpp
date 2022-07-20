class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), count = 0, sum = 0;
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum == k) count++;
            
            if(m.find(sum - k) != m.end()) count += m[sum - k];
            
            if(m.find(sum) != m.end()) m[sum]++;
            else m.insert({sum, 1});
        }
        
        return count;
    }
};