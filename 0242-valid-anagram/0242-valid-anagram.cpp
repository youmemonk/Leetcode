class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        unordered_map<char, int> sm, tm;
        
        for(int i = 0; i < s.length(); i++){
            if(sm.find(s[i]) == sm.end()) sm.insert({s[i], 1});
            else sm[s[i]]++;
            
            if(tm.find(t[i]) == tm.end()) tm.insert({t[i], 1});
            else tm[t[i]]++;
        }
        
        return (sm == tm);
    }
};