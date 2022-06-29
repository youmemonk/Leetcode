class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> psl(n);
        vector<int> psr(n);
        int maxVal = INT_MIN;
        
        psl[0] = cardPoints[0];
        for(int i=1; i<n; i++){
            psl[i] = psl[i-1] + cardPoints[i];
        }
        
        psr[n-1] = cardPoints[n-1];
        for(int i=n-2; i>=0; i--){
            psr[i] = psr[i+1] + cardPoints[i];
        }
        
        for(int i=0; i<=k; i++){
            int left, right;
            if(i == 0){
                left = 0;
                right = psr[n-k];
            }
            else if(i > (k-1)){
                left = psl[i-1];
                right = 0;
            }
            else{
                left = psl[i-1];
                right = psr[n-k+i];
            }
            
            int total = left + right;
            maxVal = max(maxVal, total);
        }
        
        return maxVal;
    }
};