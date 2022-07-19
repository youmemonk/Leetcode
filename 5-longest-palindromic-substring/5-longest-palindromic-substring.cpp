class Solution {
public:
    string expand(string s, int i, int j){
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }
        return s.substr(i+1, j-i-1);
    }
    
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.length();
        
        for(int i = 0; i < n; i++){
            string temp1 = expand(s, i, i);
            if(ans.length() < temp1.length()) ans = temp1;
        }
        for(int i = 0; i < n-1; i++){
            string temp2 = expand(s, i, i+1);
            if(ans.length() < temp2.length()) ans = temp2;
        }
        
        return ans;
    }
};