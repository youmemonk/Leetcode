class Solution {
public:
    void reverse(vector<int>& arr, int i, int j){
        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
        
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size() - 1);
    }
};