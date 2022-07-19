class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        int n = strs.size(), c = 0;
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[n-1];
        
        while(c < first.length()){
            if(first[c] == last[c]) c++;
            else break;
        }
        
        return (c == 0 ? "" : first.substr(0, c));
    }
};