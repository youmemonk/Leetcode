class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ps[n];
        int leftSum, rightSum;
        
        ps[0] = nums[0];
        for(int i=1; i<n; i++){
            ps[i] = ps[i-1] + nums[i];
        }
        
        for(int i=0; i<n; i++){
            if(i == 0){
                leftSum = 0;
                rightSum = ps[n-1] - ps[0];
            }
            else if(i == (n-1)){
                rightSum = 0;
                leftSum = ps[n-2];
            }
            else{
                leftSum = ps[i-1];
                rightSum = ps[n-1] - ps[i];
            }
            
            if(leftSum == rightSum) return i;
        }
        
        return -1;
    }
};