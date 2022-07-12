class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int len = 0, positive = 0, negative = 0;
        
        for(int num : nums){
            if(num == 0){
                positive = 0;
                negative = 0;
            }
            else if(num > 0){
                positive++;
                negative = negative == 0 ? 0 : negative + 1;
            }
            else{
                swap(positive, negative);
                positive = positive == 0 ? 0 : positive + 1;
                negative++;
            }
            len = max(len, positive);
        }
        
        return len;
    }
};