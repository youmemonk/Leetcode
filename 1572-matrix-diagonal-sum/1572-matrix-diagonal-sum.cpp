class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, n = mat.size(), i, j;
        i= 0;
        while(i < n){
            sum += mat[i][i];
            i++;
        }
        
        i = 0;
        j = n - 1;
        while(i < n && j >= 0){
            sum += mat[i][j];
            i++;
            j--;
        }
        
        sum = (n % 2 != 0) ? sum - mat[n/2][n/2] : sum;
        return sum;
    }
};