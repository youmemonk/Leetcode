class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        
        int n = nums.size();
        int psLeft[n], psRight[n];
        
        psLeft[0] = nums[0];
        for(int i=1; i<n; i++){
            psLeft[i] = psLeft[i-1] + nums[i];
        }
        
        psRight[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            psRight[i] = psRight[i+1] + nums[i];
        }
        
        //0
        if(psRight[1] == 0) return 0;
        for(int i=1; i<n-1; i++){
            if(psLeft[i-1] == psRight[i+1]) return i;
        }
        if(psLeft[n-2] == 0) return (n-1);
        
        return -1;
    }
};