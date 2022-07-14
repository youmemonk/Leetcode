class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for(int num : nums) s.insert(num);
        
        int i = 0;
        while(i <= n){
            if(s.find(i) == s.end()) return i;
            i++;
        }
        
        return -1;
    }
};