class Solution {
public:
    vector<int> dfs(unordered_map<int,vector<int>> &adj, int curr,int parent,string &labels,vector<int>&result){
        vector<int> mycount(26,0);
        char mylabel=labels[curr];
        mycount[mylabel-'a']=1;
        for(int &child : adj[curr]){
            if(child==parent)continue;
            vector<int> childcount(26,0);
            childcount=dfs(adj,child,curr,labels,result);
            for(int i = 0 ; i < 26 ; i++){
                mycount[i]=mycount[i] + childcount[i];
            }
        }
        
        result[curr]=mycount[mylabel-'a'];
        return mycount;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        unordered_map<int,vector<int>>adj;
        for(auto vec : edges){
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> result(n,0);
        dfs(adj,0,-1,labels,result);
        return result;
    }
};