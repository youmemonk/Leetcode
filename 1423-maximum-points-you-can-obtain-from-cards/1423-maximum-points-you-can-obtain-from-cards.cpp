class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //sliding window approach
        int n = cardPoints.size();
        int i=0, j=n-k-1, total = 0, c = 0;
        total = accumulate(cardPoints.begin()+j+1, cardPoints.end(), 0);
        c = total;
        i++; j++;
        
        while(j<n){
            c -= cardPoints[j];
            c += cardPoints[i-1];
            i++; j++;
            total = max(total, c);
        }
        
        return total;
    }
};