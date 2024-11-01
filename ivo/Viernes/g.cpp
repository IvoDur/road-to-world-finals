#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long v;
    cin >> v;
    long long costs[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> costs[i];
    }
    long long max_digits = 0;
    long long max_number = 0;
    long long rest = 0;
    for (int i = 0; i < 9; i++)
    {
        long long num_digits = v / costs[i];
        if (max_digits <= num_digits)
        {
            max_digits = num_digits;
            max_number = i + 1;
            rest = v - num_digits * costs[i];
        };
        for (int j = i + 1; j < 9; j++)
        {
        }
    }
    if (max_digits == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        for (int i = 0; i < max_digits; i++)
        {
            cout << max_number;
        }
        cout << '\n';
    }
}