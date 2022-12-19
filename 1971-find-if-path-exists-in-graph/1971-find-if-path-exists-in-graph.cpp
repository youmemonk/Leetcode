class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)return true;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
             mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        queue<int> q;
        q.push(source);
        bool flag=false;
        while(!q.empty()){
            for(auto it :mp[q.front()]){
                if(vis[it]==0){
                    vis[it]=1;
                    if(destination==it){flag=true;break;}
                    q.push(it);
                }
            }
            q.pop();
        }
        return flag;
    }
};