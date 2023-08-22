class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for(auto num: nums){
            if(hashset.find(num) != hashset.end()) return true;
            hashset.insert(num);
        }
        return false;
    }
};