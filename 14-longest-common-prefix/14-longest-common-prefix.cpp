class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(), i = 0;
        bool flag = true;
        string ans = "";
        
        for(int i = 0; i < strs[0].length(); i++){
            char first = strs[0][i];
            int j = 1;
            while(j < n){
                if(strs[j][i] != first){
                    flag = false;
                    break;
                }
                else j++;
            }
            
            if(flag) ans += first;
            else break;
        }
        
        return ans;
    }
};