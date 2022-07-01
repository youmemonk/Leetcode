class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return 0;
        
        for(int i=0; i<n; i++){
            (nums[i] % 2 == 0) ? nums[i] = 0 : nums[i] = 1;
        }
        
        unordered_map<int,int> mymap;
        int currSum = 0, i = 0, count = 0;
        
        while(i < n){
            currSum += nums[i];
            if(currSum == k) count++;
            
            if(mymap.find(currSum-k) != mymap.end()) count += mymap[currSum - k];
            
            mymap[currSum]++;
            i++;
        }
        
        return count;
    }
};