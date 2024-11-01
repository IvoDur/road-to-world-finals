#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1000001];
bool visited[1000001];

void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = true;
    // process node s
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int node_map[n][m];
    int nodes = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char tile;
            cin >> tile;
            if (tile == '.')
            {
                nodes++;
                node_map[i][j] = nodes;
                visited[nodes] = false;
            }
            else
            {
                node_map[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (node_map[i][j] > 0)
            {
                if (node_map[i - 1][j] > 0)
                {
                    adj[node_map[i][j]].push_back(node_map[i - 1][j]);
                }
                if (node_map[i + 1][j] > 0)
                {
                    adj[node_map[i][j]].push_back(node_map[i + 1][j]);
                }
                if (node_map[i][j - 1] > 0)
                {
                    adj[node_map[i][j]].push_back(node_map[i][j - 1]);
                }
                if (node_map[i][j + 1] > 0)
                {
                    adj[node_map[i][j]].push_back(node_map[i][j + 1]);
                }
            }
        }
    }

    int components = 0;
    for (int i = 1; i <= nodes; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            components++;
        }
    }
    cout << components << '\n';
}
