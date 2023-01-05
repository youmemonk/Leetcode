class Solution {
public:
static bool comparator(vector<int>&a,vector<int>&b)
{
    if(a[1]<b[1])return true;
    else return false;
}
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comparator); int s=points [0][1];
        int c=1;
     for(int i=1;i<points.size();i++)
     {
        if(points[i][0]<=s)
        {
            continue;
        }
        else
        {
            c++;
            s=points[i][1];
        }
     } 
     return c;  
    }
};