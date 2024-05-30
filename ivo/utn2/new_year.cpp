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
    int n, k;
    cin >> n >> k;
    vector<int> time;
    int remain = 60 * 4 - k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (i + 1) * 5;
        time.push_back(sum > remain ? 1 : 0);
    }
    int r = busquedaBinaria(1, time);

    if (r == -1)
    {
        r = n;
    }

    cout << r << '\n';
}
