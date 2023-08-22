class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        
        for(auto str: strs){
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            hashmap[sortedStr].push_back(str);
        }
        
        vector<vector<string>> result;
        for(auto x: hashmap) result.push_back(x.second);
        
        return result;
    }
};