class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), maxSoFar = -1, prev = INT_MIN;
        for(int i = n-1; i>=0; i--){
            prev = arr[i];
            arr[i] = maxSoFar;
            maxSoFar = max(maxSoFar, prev);
        }
        
        return arr;
    }
};