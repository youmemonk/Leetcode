class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int> a(nums1);
        a.insert(a.end(), nums2.begin(), nums2.end());
        
        sort(a.begin(), a.end());
        
        int n = nums1.size() + nums2.size();
        double median = 0;
        if(n%2 == 0){
            median = a[n/2 -1] + a[n/2];
            median = median /2;
        }
        else{
            median = a[(n)/2];
        }
        return median;
    }
};