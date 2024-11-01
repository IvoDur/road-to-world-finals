#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans_a = 0;
    int ans_b = 0;
    int ch = 0;

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n / 2; ++i)
    {
        ans_a += a[2 * i];
        ans_b += a[2 * i + 1];
    }

    int total_diff = ans_a - ans_b;

    if (total_diff == 0)
    {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 0; i < n / 2; i++)
    {
        int diff = a[2 * i] - a[2 * i + 1];
        if (diff >= 0 && (ans_a - diff) > (ans_b + diff) && total_diff > diff)
        {
            ans_a -= diff;
            ans_b += diff;
            ch++;
        }
    }

    cout << ch << '\n';

    return 0;
}
