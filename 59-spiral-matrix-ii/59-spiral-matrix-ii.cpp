class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));
        
        int left = 0, right = n, top = 0, bottom = n;
        int count = 1;
        
        while(left < right && top < bottom){
            for(int i = left; i < right; i++) matrix[top][i] = count++;
            top++;
            
            for(int i = top; i < bottom; i++) matrix[i][right-1] = count++;
            right--;
            
            if(!(left < right && top < bottom)) break;
            
            for(int i = right - 1; i >= left; i--) matrix[bottom-1][i] = count++;
            bottom--;
            
            for(int i = bottom - 1; i >= top; i--) matrix[i][left] = count++;
            left++;
            
        }
        
        return matrix;
    }
};