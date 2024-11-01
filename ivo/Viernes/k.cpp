#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string op;
    cin >> op;
    int rocks = 0;
    for (int i = 0; i < n; i++)
    {
        if (op[i] == '-' && rocks != 0)
        {
            rocks--;
        }
        else if (op[i] == '+')
        {
            rocks++;
        }
    }
    cout << rocks << '\n';
}