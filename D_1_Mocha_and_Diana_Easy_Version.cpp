void dfs(int node, vector<vector<int>> adj, vector<bool> &vis)
{
    vis[node] = true;
    cout << node << " ";
    for (auto x : adj[node])
    {
        if (vis[x])
        {
            ;
        }
        else
        {
            dfs(x, adj, vis);
        }
    }
}
void DFS()
{
    int n, m;
    cin >> n >> m;
    vector<bool> vis(n + 1, false);
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {

            dfs(i, adj, vis);
        }
    }
}