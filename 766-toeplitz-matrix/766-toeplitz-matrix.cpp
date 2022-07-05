class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        // top col
        for(int s = 0; s < n; s++){
            int start = matrix[0][s];
            int i = 0, j = s;
            while(i < m && j < n){
                if(matrix[i][j] != start) return false;
                i++;
                j++;
            }
        }
        
        //row
        for(int s=1; s<m; s++){
            int start = matrix[s][0];
            int j = 0, i = s;
            while(j < n && i < m){
                if(matrix[i][j] != start) return false;
                i++;
                j++;
            }
        }
        
        return true;
    }
};