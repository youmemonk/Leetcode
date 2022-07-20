class Solution {
public:
    bool checkPal(string s, int i, int j){
        if(i >= j) return true;
        if(s[i] != s[j]) return false;
        return checkPal(s, i+1, j-1);
    }
    
    bool isPalindrome(int x) {
        string s = to_string(x);
        return checkPal(s, 0, s.length() - 1);
    }
};