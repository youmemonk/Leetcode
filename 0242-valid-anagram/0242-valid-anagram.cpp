class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        unordered_map<char, int> mp1, mp2;
        
        for(int i = 0; i < s.length(); i++){
            if(mp1.find(s[i]) != mp1.end()) mp1[s[i]]++;
            else mp1.insert({s[i], 1});
            
            if(mp2.find(t[i]) != mp2.end()) mp2[t[i]]++;
            else mp2.insert({t[i], 1});
        }
        
        return (mp1 == mp2);
    }
};