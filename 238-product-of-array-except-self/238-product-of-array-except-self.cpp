class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            (i==0) ? prefix[i] = nums[i] : prefix[i] = nums[i] * prefix[i-1];
        }
        for(int i=n-1; i>=0; i--){
            (i==n-1) ? suffix[i] = nums[i] : suffix[i] = nums[i] * suffix[i+1];
        }
        
        for(int i=0; i<n; i++){
            if(i == 0) ans[i] = suffix[1];
            else if(i == n-1) ans[i] = prefix[n-2];
            else{
                ans[i] = prefix[i-1] * suffix[i+1];
            } 
        }
        
        return ans;
    }
};