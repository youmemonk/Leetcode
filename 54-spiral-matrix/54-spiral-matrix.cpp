class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = n, top = 0, bottom = m;
        
        vector<int> res;
        
        while(left < right && top < bottom){
            //top left to top right
            for(int i=left; i<right; i++)
                res.push_back(matrix[top][i]);
            top += 1;
            
            //top right to bottom right
            for(int i=top; i<bottom; i++)
                res.push_back(matrix[i][right-1]);
            right -= 1;
            
            if(!(left<right && top<bottom)) break;
            
            //bottom right to bottom left
            for(int i=right-1; i>=left; i--)
                res.push_back(matrix[bottom-1][i]);
            bottom -= 1;
            
            //bottom left to top left
            for(int i=bottom-1; i>=top; i--)
                res.push_back(matrix[i][left]);
            left += 1;
        }
        
        return res;
    }
};