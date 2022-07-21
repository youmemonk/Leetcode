class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n = words.size();
        unordered_map<char, int> mp;
        for(int i = 0; i < order.length(); i++) mp.insert({order[i], i});
        
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < words[i].length(); j++){
                if(j >= words[i+1].length()) return false;
                
                if(mp[words[i][j]] > mp[words[i+1][j]]) return false;
                else if(mp[words[i][j]] < mp[words[i+1][j]]) break;
                else continue;
            }
        }
        
        return true;
    }
};