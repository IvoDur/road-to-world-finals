#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n, m;
        cin >> n >> m;

        long long sum = ((n / m) * (m + (n - n % m))) / 2;

        std::cout << sum << '\n';
    }
}
