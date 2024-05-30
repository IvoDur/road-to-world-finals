#include <bits/stdc++.h>
using namespace std;

int busquedaBinaria(int x, vector<int> &A)
{
    int n = int(A.size());
    int a = -1, b = n;           // de a para atras <
    while (b - a > 1)            // de b para adelante >=
    {                            // [a +1...b -1] : RANGO ACTIVO
        int medio = (a + b) / 2; // punto medio de [a..b]
        if (A[medio] < x)
            a = medio;
        else
            b = medio;
    }
    if (b < n && A[b] == x) // a = 6 , b = 7
        return b;           // en el ejemplo anterior
    else
        return -1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        int bonus = total / 9;

        if (total % 9 == 0 && a >= bonus && b >= bonus && c >= bonus)
        {
            std::cout << "YES" << '\n';
        }
        else
        {
            std::cout << "NO" << '\n';
        }
    }
}
