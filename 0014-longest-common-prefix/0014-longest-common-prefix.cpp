class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(), i = 0;
        string ans = "";
        bool flag = false;
        for(int i = 0; i < strs[0].length(); i++){
            char first = strs[0][i];
            int j = 1;
            while(j < n){
                if(strs[j][i] == first) j++;
                else{
                    flag = true;
                    break;
                };
            }
            
            if(!flag && j == n) ans += first;
        }
        
        return ans;
    }
};