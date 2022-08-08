class NumMatrix {
public:
    vector<vector<int>> matrix;
    vector<vector<int>> ps;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        this->matrix = matrix;
        ps.resize(n, vector<int>(m));
        calcPrefixSum(matrix);
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int toAdd = ps[row2][col2] + ((row1 != 0 && col1 != 0) ? ps[row1-1][col1-1] : 0);
        int toSub = ((col1 != 0) ? ps[row2][col1-1] : 0) + ((row1 != 0) ? ps[row1-1][col2] : 0);
        
        return (toAdd - toSub);
    }
    
    void calcPrefixSum(vector<vector<int>> matrix){
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ps[i][j] = (j == 0) ? matrix[i][j] : ps[i][j-1] + matrix[i][j];
            }
        }
        
        for(int j = 0; j < m; j++){
            for(int i = 0; i < n; i++){
                ps[i][j] = (i == 0) ? ps[i][j] : ps[i-1][j] + ps[i][j];
            }
        }
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */