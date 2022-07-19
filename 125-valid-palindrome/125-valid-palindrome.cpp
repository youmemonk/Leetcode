class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
                if(s[i] >= 48 && s[i] <= 57){
                    check += s[i];
                }
                else{
                    check += s[i] | 32;
                }
        }
        
        int i = 0, j = check.length() - 1;
        while(i < j){
            if(check[i] != check[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};