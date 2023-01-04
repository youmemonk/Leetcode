class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> count;
        for(auto it: tasks) {
            count[it]++;
        }
        int ans = 0;
        for(auto it: count) {
            if(it.second == 1) return -1;
            if(it.second%3 == 0) ans += it.second/3;
            else ans += it.second/3 + 1;
        }
        return ans;
    }
};