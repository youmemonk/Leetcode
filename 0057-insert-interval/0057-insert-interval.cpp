class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInt) {
        
        int len = intervals.size(), w = 0, r = 0;
        vector<vector<int>> res(len + 1);
        
        while (r < len && intervals[r][1] < newInt[0]) res[w++] = intervals[r++];
        
        newInt[0] = min(r < len ? intervals[r][0] : INT_MAX, newInt[0]);
        while (r < len && newInt[1] >= intervals[r][0]) r++;
        newInt[1] = max(r && r <= len ? intervals[r - 1][1] : INT_MIN, newInt[1]);
        res[w++] = newInt;
        
        while (r < len) res[w++] = intervals[r++];
        res.resize(w);
        return res;
    }
};