class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> r;
        vector<int> c;
        
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0;  i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        
        for(int i = 0; i < r.size(); i++){
            for(int j = 0; j < n; j++){
                matrix[r[i]][j] = 0;
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < c.size(); j++){
                matrix[i][c[j]] = 0;
            }
        }
        
    }
};