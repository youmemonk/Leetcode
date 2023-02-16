class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> squares[9];
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char val = board[i][j];
                if(val == '.') continue;
                
                int pos = (i/3)*3 + (j/3);
                if(rows[i].count(val) || cols[j].count(val) || squares[pos].count(val)) return false;
                
                rows[i].insert(val);
                cols[j].insert(val);
                squares[pos].insert(val);
            }
        }
        
        return true;
    }
};