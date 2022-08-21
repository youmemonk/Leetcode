class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i = 1; i <= numRows; i++){
            if(i == 1) res.push_back({1});
            else{
                vector<int> temp(i);
                temp[0] = temp[i-1] = 1;
                for(int j = 1; j < i-1; j++){
                    temp[j] = res[i-2][j-1] + res[i-2][j];
                }

                res.push_back(temp);
            }
        }
        
        return res;
    }
};