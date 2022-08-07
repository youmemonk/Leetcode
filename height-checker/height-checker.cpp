class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0, n = heights.size();
        vector<int> expected(n);
        
        for(int i = 0; i < n; i++){
            expected[i] = heights[i];
        }
        
        sort(heights.begin(), heights.end());
        
        for(int i = 0; i < n; i++){
            if(heights[i] != expected[i]) count++;
        }
        
        return count;
    }
};