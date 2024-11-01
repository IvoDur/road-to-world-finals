#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long int u, v;
        cin >> u >> v;

        /*
        for (long long y = 1; y < 10e18; y++)
        {
            float x = (-y) * ((u * u) / (v * v));
            // if ((x / u) + (y / v) == (x + y) / (u / v))
            //{
            if (std::floor(x) == x)
            {
                std::cout << x << ' ' << y << '\n';
                break;
            }
            // break;

            // }
        }
        */
        long long int x = -(u * u);
        long long int y = (v * v);
        std::cout << x << ' ' << y << '\n';
    }
}