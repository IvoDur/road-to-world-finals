#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, n;
    cin >> a >> n;
    vector<pair<int, int>> adj[n];
    int adj_matrix[n][n];
    std::memset(adj_matrix, 0, sizeof adj_matrix);
    for (int i = 0; i < a; i++)
    {
        vector<int> paper;
        string line;
        getline(cin, line);
        istringstream is(line);
        int num;
        while (is >> num)
        {
            paper.push_back(num);
        }
        for (int num : paper)
        {
            for (int num2 : paper)
            {
                adj_matrix[num][num2] = 1;
            }
        }
    }
    // solution comes here
}
