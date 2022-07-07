class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return false;
        
        int i = 1;
        while(i < n && arr[i-1] < arr[i])
            i++;
        
        if(i == 1 || i == n) return false;
        
        while(i < n && arr[i-1] > arr[i])
            i++;
        
        return (i == n);
    }
};