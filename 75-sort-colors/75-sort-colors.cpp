class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0, c1 = 0, c2 = 0, n = nums.size();
        for(int num : nums){
            if(num == 0) c0++;
            else if(num == 1) c1++;
            else c2++;
        }
        
        for(int i = 0; i < n; i++){
            if(i < c0) nums[i] = 0;
            else if(i >= c0 && i < c0 + c1) nums[i] = 1;
            else nums[i] = 2;
        }
        
        return;
    }
};