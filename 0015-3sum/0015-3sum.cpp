class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        //base case
        if(nums.size() < 3){
            return v;
        }
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size() - 2; i++){
            int target = -nums[i];
            int l = i+1, r = nums.size() - 1;
            
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum > target){
                    r--;
                }
                else if(sum < target){
                    l++;
                }
                else{
                    vector<int> triplet = {nums[i], nums[l], nums[r]};
                    v.push_back(triplet);
                    
                     while (l < r && nums[l] == triplet[1]) l++;
                    while (l < r && nums[r] == triplet[2]) r--;
                }
            }
            
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;
        }
        
        return v;
    }
};