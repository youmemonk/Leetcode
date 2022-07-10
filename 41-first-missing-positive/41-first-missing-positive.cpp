class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //O(n) time, O(n) space
        int n = nums.size(), i;
        set<int> s;
        
        for(int num : nums){
            s.insert(num);
        }
        
        for(i = 1; i <= nums.size(); i++){
            if(s.find(i) == s.end()){
                return i;
            }
        }
        
        return i;
    }
};