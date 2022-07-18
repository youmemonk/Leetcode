class Solution {
public:
    void sortColors(vector<int>& nums) {
        //one pass sol
        int n = nums.size(), zero = 0, second = n - 1;
        for(int i = 0; i <= second; i++){
            while(nums[i] == 2 && i<second) swap(nums[i], nums[second--]);
            while(nums[i] == 0 && i>zero) swap(nums[i], nums[zero++]);
        }
        return;
    }
};