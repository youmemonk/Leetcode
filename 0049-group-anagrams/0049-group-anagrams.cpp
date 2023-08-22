class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for(auto str:strs){
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());
            hashmap[sorted_str].push_back(str);
        }

        vector<vector<string>> result;
        for(auto x:hashmap) result.push_back(x.second);

        return result;
    }
};