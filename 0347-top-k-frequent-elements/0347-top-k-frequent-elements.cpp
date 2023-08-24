class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> maxHeap;
        unordered_map<int, int> hashmap;

        for(auto x:nums) hashmap[x]++;
        for(auto x:hashmap) maxHeap.push({x.second, x.first});

        vector<int> result;
        while(k-- && !maxHeap.empty()){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;
    }
};