class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n =arr.size(), maxVal = -1;
        vector<int> ans(n);
        ans[n-1] = -1;
        
        for(int i=n-2; i>=0; i--){
            maxVal = max(maxVal, arr[i+1]);
            ans[i] = maxVal;
        }
        
        return ans;
    }
};