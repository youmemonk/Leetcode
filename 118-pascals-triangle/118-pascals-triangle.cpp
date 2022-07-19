class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        for(int i = 1; i < numRows; i++){
            vector<int> rows(i+1);
            rows[0] = 1;
            rows[i] = 1;
            
            for(int j = 1; j < i; j++){
                rows[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(rows);
        }
        
        return ans;
    }
};