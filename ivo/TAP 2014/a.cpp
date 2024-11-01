#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

//  Ahora bien, como no queremos simplificar excesivamente su tarea, vamos a tener
// en cuenta que no todos los juegos utilizan las 48 cartas de la baraja. Dada una secuencia
// de N cartas, decimos que est´a bien mezclada si no hay en ella dos cartas sucesivas que
// comparten el mismo valor o el mismo palo

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a, b;
        char c, d;
        cin >> a >> c;

        bool ans = true;
        for (int i = 1; i < n; i++)
        {
            cin >> b >> d;
            if (a == b || c == d)
                ans = false;
            a = b;
            c = d;
        }

        if (ans)
            cout << "B" << '\n';
        else
            cout << "M" << '\n';
    }
}