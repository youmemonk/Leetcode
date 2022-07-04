class Solution {
public:
    static bool compare(vector<int>& left, vector<int>& right){
        return left[1] > right[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res = 0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        for(int i=0; i < boxTypes.size(); i++){
            int x = min(boxTypes[i][0], truckSize);
            res += x * boxTypes[i][1];
            truckSize -= x;
            if(truckSize <= 0) break;
        }
        
        return res;
    }
};