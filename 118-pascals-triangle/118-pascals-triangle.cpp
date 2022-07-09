class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i = 1; i <= numRows; i++){
            if(numRows == 1){
                res.push_back({1});
                return res;
            }
            else{
                vector<int> row(i);
                row[0] = 1;
                row[i-1] = 1;
                
                for(int j = 1; j < i - 1; j++){
                    row[j] = res[i-2][j-1] + res[i-2][j];
                }
                res.push_back(row);
            }
        }
        
        return res;
    }
};