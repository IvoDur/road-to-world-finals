#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define ll long long
#define MAX_N 1001
string s;
long long n, m, k;
long long res = 0;
vector<int> dp(MAX_N, 0);
vector<vector<ll>> adj(MAX_N, vector<ll>(MAX_N, 0));

void dfs_id(ll node)
{
    for (ll i = 1; i <= n; i++)
    {
        if (adj[node][i])
        {
            dp[i] = node;
        }
    }
}

void dfs(ll node, ll id)
{

    for (ll i = 1; i <= n; i++)
    {
        if (dp[i] != 0)
        {
            if (dp[i] != id)
                continue;
        }
        if (i == id)
            continue;
        if (i == node)
            continue;
        // dp[i] = true;
        //  if(node == i)continue;
        //  cout << "IT" << endl;
        //  cout << node << endl;
        //  cout << i << endl;
        //  cout << adj[node][i] << endl;
        if (adj[node][i] == 0)
        {
            dp[i] = id;
            res++;
            adj[node][i] = 1;
            adj[i][node] = 1;
        }
        else
        {
            continue;
        }
        dfs(i, id);
    }
}

int main()
{
    fast_io;

    cin >> n >> m >> k;

    for (int i = 0; i < k; i++)
    {
        int king;
        cin >> king;
        dp[king] = king;
    }

    for (int i = 1; i <= m; i++)
    {
        int from, to;
        cin >> from >> to;
        if (dp[from])
        {
            dp[to] = from;
        }
        else if (dp[to])
        {
            dp[from] = to;
        }
        adj[from][to] = 1;
        adj[to][from] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == i)
        {
            dfs_id(i);
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp[i])
        {
            dfs(i, dp[i]);
            break;
        }
    }

    cout << res << endl;

    return 0;
}