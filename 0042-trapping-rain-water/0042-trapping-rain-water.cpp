class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), ans = 0, h;
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        
        for(int i = 0; i < n; i++){
            (i == 0) ? leftMax[i] = height[i] : leftMax[i] = max(leftMax[i-1], height[i]);
        }
        for(int i = n-1; i >= 0; i--){
            (i == n-1) ? rightMax[i] = height[i] : rightMax[i] = max(rightMax[i+1], height[i]);
        }
        
        for(int i = 0; i < n; i++){
            h = min(leftMax[i], rightMax[i]) - height[i];
            if(h > 0) ans += h;
        }
        
        return ans;
    }
};