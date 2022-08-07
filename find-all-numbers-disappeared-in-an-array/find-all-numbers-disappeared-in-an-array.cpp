class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> ans;
        
        for(int num : nums) s.insert(num);
        for(int i = 1; i <= nums.size(); i++){
            if(s.find(i) == s.end()) ans.push_back(i);
        }
        
        return ans;
    }
};