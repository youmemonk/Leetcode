class Solution {
public:
    bool isBipartite(vector<vector<int>> &next, int N, int node, vector<int> &colour)
{
    queue<int> q;
    q.push(node);
    colour[node] = 1;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int it : next[curr])
        {
            if (colour[it] == colour[curr])
                return false;
            if (colour[it] == -1)
            {
                colour[it] = 1 - colour[curr];
                q.push(it);
            }
        }
    }
    return true;
}
bool possibleBipartition(int n, vector<vector<int>> &dislikes)
{
    vector<vector<int>> next(n + 1);
    for (int i = 0; i < dislikes.size(); ++i)
    {
        next[dislikes[i][0]].push_back(dislikes[i][1]);
        next[dislikes[i][1]].push_back(dislikes[i][0]);
    }

    vector<int> colour(n + 1, -1);
    for (int i = 1; i <= n; ++i)
        if (colour[i] == -1)
            if (!isBipartite(next, n, i, colour))
                return false;
    return true;
}
};