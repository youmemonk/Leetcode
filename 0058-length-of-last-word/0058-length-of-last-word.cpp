class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int i = s.length() - 1, count = 1;
        
        while(i >= 0){
            if(flag){
                if(s[i] == ' ') break;
                else count++;
            }
            else{
                if(s[i] != ' ') flag = true;
            }
            
            i--;
        }
        
        return count;
    }
};