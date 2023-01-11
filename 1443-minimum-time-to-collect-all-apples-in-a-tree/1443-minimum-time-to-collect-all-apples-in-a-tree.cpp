class Solution {
public:
int dfs(int curr, int parent, vector<bool> &hasApple, vector<vector<int>> &adjList){
    int time = 0;
    for(auto child: adjList[curr]){
        if (child == parent){
            continue;
        }
        int childtime = dfs(child, curr, hasApple, adjList);
        if (childtime || hasApple[child]){
            time+= 2 + childtime;
        }
    }
    return time;
}
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adjList(n);
        for(int i = 0;i < edges.size(); i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        

        return dfs(0, -1, hasApple, adjList);
    }
};