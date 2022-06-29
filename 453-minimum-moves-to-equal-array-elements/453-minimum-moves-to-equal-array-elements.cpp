class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0, minVal = INT_MAX, n = nums.size(), ans;
        for(int i:nums){
            sum += i;
            minVal = min(i, minVal);
        }
        
        ans = sum - minVal * n;
        return ans;
    }
};