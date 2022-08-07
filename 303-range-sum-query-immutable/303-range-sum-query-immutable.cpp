class NumArray {
public:
    vector<int> nums;
    vector<int> ps;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        this->nums = nums;
        ps.resize(n);
        prefixSumCalc(nums);
    }
    
    int sumRange(int left, int right) {
        return (left == 0) ? ps[right] : ps[right] - ps[left - 1];
    }
    
    void prefixSumCalc(vector<int> nums){
        for(int i = 0; i < nums.size(); i++){
            ps[i] = (i == 0) ? nums[i] : ps[i-1] + nums[i];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */