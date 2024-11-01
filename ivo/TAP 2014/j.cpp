#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int lista[t];
    vector<int> posible;
    int posibles[t];
    memset(posibles, 0, sizeof posibles);
    for (int i = 0; i < t; i++)
    {
        cin >> lista[i];
        if (lista[i] == t - (i + 1))
        {
            posible.push_back(i);
            posibles[i] = 1;
        }
    }
    for (int i = t - 1; i >= 0; i--)
    {
        if (lista[i] + i < t && posibles[i + 1 + lista[i]] == 1)
        {
            posible.insert(posible.begin(), i);
            posibles[i] = 1;
        }
        //    for (int limit : posible)
        //    {
        //        if (lista[i] == limit - (i + 1))
        //        {
        //            posible.insert(posible.begin(), i);
        //        }
        //   }
    }
    for (int limit : posible)
    {
        if (limit != 0)
        {
            cout << limit << '\n';
        }
    }
    cout << t << '\n';
}
