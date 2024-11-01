#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        auto time1 = (r - 1) + (c - 1);
        auto time2 = (n - r) + (m - c);
        auto time3 = (n - r) + (c - 1);
        auto time4 = (r - 1) + (m - c);
        std::vector<int> times = {time1, time2, time3, time4};
        auto max_time = *max_element(times.begin(), times.end());

        std::cout << *max_element(times.begin(), times.end()) << '\n';
    }
}