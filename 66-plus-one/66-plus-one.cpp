class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1, sum = 0;
        
        for(int i = n - 1; i >= 0; i--){
            sum = carry + digits[i];
            if(sum <= 9){
                digits[i] = sum;
                carry = 0;
                break;
            }
            else{
                digits[i] = sum % 10;
                carry = sum / 10;
            }
        }
        
        if(carry > 0){
            vector<int> ans(n+1, 0);
            ans[0] = carry;
            for(int i = 0; i < n; i++){
                ans[i+1] = digits[i];
            }
            return ans;
        }
        
        return digits;
    }
};