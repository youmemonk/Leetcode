class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left[n], right[n];
        
        left[0] = height[0];
        for(int i=1; i<n; i++){
            left[i] = max(left[i-1], height[i]);
        }
        
        right[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            right[i] = max(right[i+1], height[i]);
        }
        
        int waters = 0;
        for(int i=1; i<n-1; i++){
            int leftMax = left[i];
            int rightMax = right[i];
            
            int water = min(leftMax, rightMax) - height[i];
            if(water > 0) waters += water;
        }
        
        return waters;
        
    }
};