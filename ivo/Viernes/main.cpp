#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0)
            {
                sum[i][j] = 1;
            }
            else
            {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1];
            }
        }
    }
    cout << sum[n - 1][n - 1] << '\n';
}