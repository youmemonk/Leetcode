class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        
        while(l < n - 1){
            if(arr[l] < arr[l+1]) l++;
            else break;
        }
        
        while(r > 0){
            if(arr[r] < arr[r-1]) r--;
            else break;
        }
        
        if(l == 0 || l == n -1 || r == 0 || r == n - 1) 
            return false;
        
        return (l == r);
    }
};