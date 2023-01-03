class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        int size = strs[0].size();

        for(int i = 0; i < size; i++) {
            int last = strs[0][i] - 'a';
            for(int j = 1; j < strs.size(); j++) {
                int cur = strs[j][i] - 'a';
                if(cur < last) {
                    cnt++; break;
                }
                last = cur;
            }
        }

        return cnt;
    }
};