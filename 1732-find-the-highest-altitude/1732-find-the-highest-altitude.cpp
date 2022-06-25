class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ps;
        int n = gain.size();
        int max_val = INT_MIN;
        
        // ps.push_back(0);
        ps.push_back(gain[0]);
        
        for(int i=1; i<n; i++){
            int x = ps[i-1] + gain[i];
            ps.push_back(x);
        }
        
        for(int i=0; i<ps.size(); i++){
            max_val = max(max_val, ps[i]);
        }
        
        return max(max_val, 0);
    }
};