class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
	if(n < 2) return n;
	int ans = 0;
	
	unordered_map<int,int> positions;
	for(int i=0;i<n;i++) positions[nums[i]] = i;
	
	for(int i=0;i<n;i++){
	int curr = nums[i];
	int length = 1;
	if(positions.find(curr - 1) != positions.end()) continue;
	while(positions.find(curr + 1) != positions.end()){
		length++;
		curr++;
}
ans = max(ans, length);
}
	
	return ans;

    }
};