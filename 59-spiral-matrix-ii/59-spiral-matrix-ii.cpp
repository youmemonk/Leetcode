class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int count = 1;
        vector<vector<int>> res(n, vector<int>(n));
        
        int left = 0, right = n, top = 0, bottom = n;
        
        while(left < right && top < bottom){
            //top left to top right
            for(int i=left; i<right; i++) res[top][i] = count++;
            top++;
            
            //top right to bottom right
            for(int i=top; i<bottom; i++) res[i][right-1] = count++;
            right--;
            
            if(!(left < right && top < bottom)) break; 
            
            //bottom right to bottom left
            for(int i=right-1; i>=left; i--) res[bottom-1][i] = count++;
            bottom--;
            
            //bottom left to top left
            for(int i=bottom-1; i>=top; i--) res[i][left] = count++;
            left++;
        }
        
        return res;
    }
};