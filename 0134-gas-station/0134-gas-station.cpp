class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0)){
            return -1;
        }
        int ans=0;
        int rem_fuel=0;
        for(int i=0;i<n;i++){
            rem_fuel+=(gas[i]-cost[i]);
            if(rem_fuel<0){
                ans=i+1;
                rem_fuel=0;
            }
        }
        return ans;
    }
};