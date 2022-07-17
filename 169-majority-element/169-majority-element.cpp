class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = nums[0], freq = 1, n = nums.size();
        int count = 0;
        
        for(int i = 1; i < n; i++){
            if(nums[i] == elem) freq++;
            else{
                if(freq == 0){
                    elem = nums[i];
                    freq = 1;
                }
                else{
                    freq--;
                }
            }
        }
        
        return elem;
    }
};