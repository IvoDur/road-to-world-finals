#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        int max_x = 0;
        int max_sum = 0;
        for (int j = 2; j <= n; j++)
        {
            int counter = 1;
            int sum = 0;
            while (j * counter <= n)
            {
                sum += j * counter;
                counter++;
            }
            if (sum > max_sum)
            {
                max_sum = sum;
                max_x = j;
            }
        }
        cout << max_x << '\n';
    }
}
