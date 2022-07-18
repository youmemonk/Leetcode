class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0, n = nums.size();
        int candidate1 = 0, candidate2 = 0;
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == candidate1) count1++;
            else if(nums[i] == candidate2) count2++;
            else if(count1 == 0){
                count1 = 1;
                candidate1 = nums[i];
            }
            else if(count2 == 0){
                count2 = 1;
                candidate2 = nums[i];
            }
            else{
                count1--;
                count2--;
            }
        }
        
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            if(candidate1 == nums[i]) c1++;
            else if(candidate2 == nums[i]) c2++;
        }
        
        if(c1 > n/3) ans.push_back(candidate1);
        if(c2 > n/3) ans.push_back(candidate2);
        
        return ans;
    }
};