#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        ll k = sqrt(sum);
        if (k * k == sum)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}