class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int totalEven = 0, totalOdd = 0;
        vector<int> psEven(n);
        vector<int> psOdd(n);
        
        psEven[0] = nums[0];
        psOdd[0] = 0;
        for(int i=1; i<n; i++){
            if(i % 2 == 0){
                psEven[i] = psEven[i-1] + nums[i];
                psOdd[i] = psOdd[i-1];
            }
            else{
                psEven[i] = psEven[i-1];
                psOdd[i] = psOdd[i-1] + nums[i];
            }
        }
        
        for(int i=0; i<n; i++){
            if(i == 0){
                totalEven = psOdd[n-1] - psOdd[i];
                totalOdd = psEven[n-1] - psEven[i];
            }
            else{
                totalEven = psEven[i-1] + psOdd[n-1] - psOdd[i];
                totalOdd = psOdd[i-1] + psEven[n-1] - psEven[i];
            }
            
            if(totalEven == totalOdd) count++;
        }
        
        return count;
    }
};