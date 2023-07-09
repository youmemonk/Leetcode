class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;
    unordered_map<char, int> sm, tm;

    for(int i = 0; i < s.length(); i++){
        if(sm.find(s[i]) != sm.end()) sm[s[i]]++;
        else sm.insert({s[i], 1});

        if(tm.find(t[i]) != tm.end()) tm[t[i]]++;
        else tm.insert({t[i], 1});
    }

    return (sm == tm);
    }
};