class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        map<vector<int>,int>m;
        int n=p.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int x=p[i][0]-p[j][0];
                int y=p[i][1]-p[j][1];
                int g=__gcd(x,y);
                x/=g;
                y/=g;
                int c=p[i][1]*x-p[i][0]*y;
                m[{x,y,c}]++;
            }
        }
        int ans=1;
        for(auto i:m){
            int x=i.second;
            x*=2;
            x=sqrt(x);
            x=x+1;
            ans=max(ans,x);
        }
        return ans;
    }
};