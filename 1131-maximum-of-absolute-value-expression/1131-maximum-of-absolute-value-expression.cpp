class Solution {
public:
    int fn(vector<int> arr){
        int n = arr.size();
        int maxVal = INT_MIN, minVal = INT_MAX;
        for(int i = 0; i < n; i++){
            maxVal = max(maxVal, arr[i]);
            minVal = min(minVal, arr[i]);
        }
        
        return (maxVal - minVal);
    }
    
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        vector<int> sum1(n, 0);
        vector<int> sum2(n, 0);
        vector<int> diff1(n, 0);
        vector<int> diff2(n, 0);
        
        for(int i = 0; i < n; i++){
            sum1[i] = arr1[i] + arr2[i] + i;
            sum2[i] = arr1[i] + arr2[i] - i;
            diff1[i] = arr1[i] - arr2[i] + i;
            diff2[i] = arr1[i] - arr2[i] - i;
        }
        
        int ans = max(max(fn(sum1), fn(sum2)), max(fn(diff1), fn(diff2)));
        return ans;
    }
};