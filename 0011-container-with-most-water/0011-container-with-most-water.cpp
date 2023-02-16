class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int start = 0, end = height.size() - 1;
        
        while(start < end){
            int x = end - start;
            int y = min(height[start], height[end]);
            
            area = max(area, x*y);
            if(height[start] < height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        
        return area;
    }
};