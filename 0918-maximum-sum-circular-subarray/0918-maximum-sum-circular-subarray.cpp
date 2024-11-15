class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=nums[0]; 
        int n=nums.size();
        int totalSum=nums[0]; 
        int maxElement=nums[0]; 

        vector<int>currMax(n);
        vector<int>currMin(n);
        currMax[0]=nums[0];
        currMin[0]=nums[0];

        for(int i=1;i<n;i++){
            currMax[i]=max(nums[i],currMax[i-1]+nums[i]);
            currMin[i]=min(nums[i],currMin[i-1]+nums[i]);
            totalSum+=nums[i];
            maxElement=max(maxElement,nums[i]);
        }

        for(int i=0;i<n;i++){
            ans=max(ans,max(currMax[i],totalSum-currMin[i]));
        }

        return ans>1?ans:maxElement;
        
    }
};