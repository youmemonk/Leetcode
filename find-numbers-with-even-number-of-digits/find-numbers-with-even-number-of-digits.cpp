class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size(), count = 0, ans = 0;
        for(int i:nums){
            count = 0;
            while(i > 0){
                i = i / 10;
                count++;
            }
            if(count % 2 == 0) ans++;
        }
        
        return ans;
    }
};