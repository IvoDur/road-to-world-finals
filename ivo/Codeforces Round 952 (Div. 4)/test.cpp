#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string var1, var2;
    string new1, new2;
    for (int i = 0; i < n; i++)
    {
        cin >> var1 >> var2;
        char c1, c2;
        c1 = var1[0];
        c2 = var2[0];
        new1 = var1.substr(1);
        new2 = var2.substr(1);
        new1 = c2 + new1;
        new2 = c1 + new2;
        cout << new1 << " " << new2 << '\n';
    }
}
