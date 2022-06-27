class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        bool flag = false;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            first = max(first, nums[i]);
        }
        
        for(int i=0; i<n; i++){
            if(nums[i] != first) second = max(second, nums[i]);
        }
        
        for(int i=0; i<n; i++){
            if(nums[i] != first && nums[i] != second){ 
                third = max(third, nums[i]);
                flag = true;
        }}
        
        if(third == INT_MIN && !flag) return first;
        return third;
    }
};