class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>> mp;
        int n= arr.size();
        vector<bool> vis(n,false);
        for(int i=0;i<n;)
        {
            int j=i;
            while(j<n&&arr[j]==arr[i])
            {
                ++j;
            }
            if(j-i==1)
            {
                mp[arr[i]].push_back(i);
                ++i;
            }
            else
            {
                mp[arr[i]].push_back(i);
                mp[arr[i]].push_back(j-1);
                i=j;
            }
        }
        int ans=0;
        queue<int> que;
        que.push(0);
        vis[0]=true;
        while(!que.empty())
        {
            int s=que.size();
            while(s--)
            {
                int pos=que.front();
                que.pop();
                if(pos==n-1) return ans;
                if(pos-1>=0&&!vis[pos-1])
                {
                    que.push(pos-1);
                    vis[pos-1]=true;
                }
                if(pos+1<n&&!vis[pos+1])
                {
                    que.push(pos+1);
                    vis[pos+1]=true;
                }
                for(auto it:mp[arr[pos]])
                {
                    if(it!=pos&&!vis[it])
                    {
                        que.push(it);
                        vis[it]=true;
                    }
                }
                mp[arr[pos]].clear();
            }
            ++ans;
        }
        return ans;
    }
};