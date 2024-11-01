#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int acum = 1;
        cin >> n;
        int potencia = 0;
        while (acum < n)
        {
            potencia++;
            acum += pow(3, potencia);
        }
        string answer = "+";
        int total = pow(3, potencia);
        int resto = total - n;
        if (resto > 0)
        {
            for (int i = potencia - 1; i >= 0; i--)
            {
                if (resto - pow(3, i) >= 0)
                {
                    answer.push_back('-');
                    resto -= pow(3, i);
                }
                else
                {
                    answer.push_back('0');
                }
            }
        }
        else
        {
            for (int i = potencia - 1; i >= 0; i--)
            {
                if (resto + pow(3, i) <= 0)
                {
                    answer.push_back('+');
                    resto += pow(3, i);
                }
                else
                {
                    answer.push_back('0');
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
    // solution comes here
}
