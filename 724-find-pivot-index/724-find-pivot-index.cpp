class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0, rightSum = 0;
        int total = 0;
        
        for(int x:nums) total += x;
        
        for(int i=0; i<n; i++){
            if(i > 0){
                leftSum += nums[i-1];
            }
            rightSum = total - leftSum - nums[i];
            
            if(leftSum == rightSum) return i;
        }
        
        return -1;
    }
};