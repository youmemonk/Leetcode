class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        unordered_map<char, int> hm;
        for(int i = 0; i < n; i++){
            if(hm.find(s[i]) == hm.end()) hm.insert({s[i], 1});
            else hm[s[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(hm[s[i]] == 1) return i;
        }
        return -1;
    }
};