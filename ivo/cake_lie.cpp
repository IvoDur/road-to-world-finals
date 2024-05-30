#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, cost;
        cin >> n >> m >> k;
        cost = 1 * (m - 1) + (n - 1) * m;
        if (k == cost)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}