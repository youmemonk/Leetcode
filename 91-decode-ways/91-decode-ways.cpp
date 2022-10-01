class Solution {
public:
    
    int numDecodings(string s) {
        return tabulation(s);
    }
private:

    int solveRecursive(string s, int i){
        if(i == s.size())   return 1;
        int ans = 0;
        
        for(int k = i; k<s.size() && k<i+2; k++){
            string num = s.substr(i, k-i+1);
            int numb = stoi(num);
            if(num[0] != '0' && numb > 0 && numb <=26)
                ans += solveRecursive(s, k+1);
        }
        return ans;
    }
    
    int recursive(string s){
        int n = s.size();
        return solveRecursive(s, 0);
    } 

    int memorizedWay(string s, int i, vector<int>& dp){
        if(i == s.size())   return 1;
        if(dp[i] != -1) return dp[i];
        int ans = 0;
        
        for(int k = i; k<s.size() && k<i+2; k++){
            string num = s.substr(i, k-i+1);
            int numb = stoi(num);
            if(num[0] != '0' && numb > 0 && numb <=26)
                ans += memorizedWay(s, k+1, dp);
        }
        return dp[i] = ans;
    }
    
    int memorized(string s){
        int n = s.size();
        vector<int>dp (n+1, -1);
        return memorizedWay(s, 0, dp);
    }
    
    int tabulation(string s){
        int n = s.size();
        if(n == 1)  return s[0] == '0' ? 0 : 1;
        
        vector<int>dp(n+1);
        dp[n] = 1;
        
        for(int i = n-1; i>=0; i--){
            if(s[i] == '0') dp[i] = 0;
            else{
                int way1 = dp[i+1], way2 = 0;
                if(i<n-1 && stoi(s.substr(i, 2))<=26 )    way2 = dp[i+2];
                dp[i] = way1 + way2;
            }
        }
        return dp[0];
    }
};