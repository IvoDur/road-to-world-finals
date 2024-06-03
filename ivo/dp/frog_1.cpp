#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;

int solve(int heights[], int results[], int i)
{
    if (results[i] != -1)
    {
        return results[i];
    }
    if (n - i == 1)
    {
        results[i] = 0;
        return results[i];
    }
    if (n - i == 2)
    {
        results[i] = abs(heights[i + 1] - heights[i]);
        return results[i];
    }
    results[i] = min(solve(heights, results, i + 1) + abs(heights[i] - heights[i + 1]), solve(heights, results, i + 2) + abs(heights[i] - heights[i + 2]));
    return results[i];
}

int main()
{
    ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::cin >> n;
    int results[n];
    int heights[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> heights[i];
        results[i] = -1;
    }

    cout << solve(heights, results, 0);
}
