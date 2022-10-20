class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int i = 0;
        
        while(numRows--){
            vector<int> v(i+1);
            v[0] = v[i] = 1;
            
            for(int j = 1; j < v.size() - 1 && i > 1; j++){
                v[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            
            ans.push_back(v);
            i++;
        }
        
        return ans;
    }
};