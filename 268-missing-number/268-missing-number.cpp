class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //bit manipulation
        int ans = 0, i = 0;
        for(int num : nums){
            ans = ans ^ num ^ i++;
        }
        return (ans ^ i);
    }
};