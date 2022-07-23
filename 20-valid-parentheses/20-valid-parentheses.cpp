class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp;
        mp.insert({')', '('});
        mp.insert({']', '['});
        mp.insert({'}', '{'});
        
        for(int i = 0; i < s.length(); i++){
            if(st.empty()) st.push(s[i]);
            else{                
                st.top() == mp[s[i]] ? st.pop() : st.push(s[i]);
            }
        }
        
        return st.empty();
    }
};