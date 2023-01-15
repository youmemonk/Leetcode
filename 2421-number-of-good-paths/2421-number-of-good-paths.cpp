class Solution {
public:
//solve function
int solve(int x, vector<int> &v1) {
    return v1[x] < 0 ? x : v1[x] = solve(v1[x], v1);
}
//given function
int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
    int n = vals.size();
    int left = 0;
    vector<vector<int>> a(n);
    for (auto &e : edges) {
        if (vals[e[0]] < vals[e[1]])
            swap(e[0], e[1]);
        a[e[0]].push_back(e[1]);
    }
    vector<int> id(n), d(n, -1), ct(n);
    iota(begin(id), end(id), 0);
    sort(begin(id), end(id), [&](int i, int j){ return vals[i] < vals[j]; });
    for (int i = 0; i < n  && vals[id[left]] < vals[id.back()]; ++i) {
        while (vals[id[left]] != vals[id[i]])
            ++ct[solve(id[left++], d)];
        for (int j : a[id[i]])
            d[solve(j, d)] = solve(id[i], d);
    }
    return accumulate(begin(ct), end(ct), (n - left) * (n - left + 1) / 2,
        [](int s, int ct){ return s + ct * (ct + 1) / 2; });
}
};