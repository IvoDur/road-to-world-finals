#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        vector<int> mices;
        cin >> n >> k;
        int a;
        for (int j = 0; j < k; j++)
        {
            cin >> a;
            mices.push_back(a);
        }
        std::sort(mices.rbegin(), mices.rend());
        int sum = 0;
        int ans = 0;
        for (int l = 0; l < k; l++)
        {
            sum += n - mices[l];
            if (sum >= n)
            {
                break;
            }
            else
            {
                ans = l + 1;
            }
        }
        cout << ans << '\n';
    }
}