#include <bits/stdc++.h>

using namespace std;

#define fori(i, n) for (int i = 0; i < (n); ++i)
#define fora(i, a, n) for (int i = a; i <= (n); ++i)
#define ford(i, a, n) for (int i = a; i >= (n); --i)

#define fi first
#define se second
#define mp make_pair
#define pb push_back

// Para printear Variables
#define dprint(v) cout << #v "=" << v << endl //;)
// Si lleva ")" al final

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 3;

int main()
{
    vector<pair<int, int>> adj[100001];
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'R')
        {

            for (int j = 0; j < i; j++)
            {
                adj[j].pb({i, i - j})
            }
        };
    }

    return 0;
}