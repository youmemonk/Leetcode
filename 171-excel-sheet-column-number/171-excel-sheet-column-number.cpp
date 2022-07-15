class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length(), ans = 0;
        int i = 0;
        for(int j = n - 1; j >= 0; j--){
            ans += pow(26, i++) * ((int)columnTitle[j] % 64);
        }
        return ans;
    }
};