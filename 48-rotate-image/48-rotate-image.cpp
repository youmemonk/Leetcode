class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), s, e;
        //flip across diagonal
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j >= i)
                    swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //flip vertical
        for(int i=0; i<n; i++){
            s = 0, e = n - 1;
            while(s < e){
                swap(matrix[i][s++], matrix[i][e--]);
            }
        }
    }
};