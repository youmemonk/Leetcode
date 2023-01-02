class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int cnt=0;
        for (int i=0;i<n;i++) {
            if (isupper(word[i])) {
                cnt++;
            }
        }
        if (cnt==n||cnt==0||cnt==1&&isupper(word[0])) {
            return true;
        }
        return false;
    }
};