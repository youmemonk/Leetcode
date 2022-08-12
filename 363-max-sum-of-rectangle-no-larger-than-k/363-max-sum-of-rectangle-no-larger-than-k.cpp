class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        if(matrix.empty()) return 0;
        int m = matrix.size(), n = matrix[0].size(), ans = INT_MIN;
        
        for(int r1 = 0; r1 < m; r1++){
            vector<int> colSum(n , 0);
            for(int r2 = r1; r2 < m; r2++){
                
                //calculate the column sum
                for(int i = 0; i < n; i++){
                    colSum[i] += matrix[r2][i];
                }
                
                //Calculate max sum subarray less than k
                set<int> accuSet;
                accuSet.insert(0);
                int currSum = 0, currMax = INT_MIN;
                
                for(int sum : colSum){
                    currSum += sum;
                    set<int>::iterator it = accuSet.lower_bound(currSum - k);
                    if(it != accuSet.end()){
                        currMax = max(currMax, currSum - *it);
                    }
                    accuSet.insert(currSum);
                }
                
                ans = max(ans, currMax);
            }            
        }
        
        return ans;
    }
};