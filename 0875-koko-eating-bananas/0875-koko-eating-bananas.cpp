class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9;
        int ans = r;
        while(l <= r){
          int mid = l + (r-l)/2;
          long cnt = 0;
          for(auto x : piles){
            if(x%mid == 0){
              cnt += x/mid;
            }
            else cnt += x/mid + 1;
          }
          if(cnt > h) l = mid +1;
          else{
            r = mid -1;
            ans = min(ans, mid);
          }
        }
      return ans;
    }
};