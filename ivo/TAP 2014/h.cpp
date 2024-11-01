#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> stations(N + 1);

        for (int i = 1; i <= N; i++)
        {
            cin >> stations[i];
        }

        int count = 0;
        vector<int> visited(N + 1, 0);

        // 5
        // 4 5 2 3 1

        for (int i = 1; i <= N; i++)
        {
            if (!visited[i])
            {
                visited[i] = 1;
                int end = stations[i];
                for (int j = i + 1; j <= N; j++)
                {
                    if (stations[j] > end && !visited[j])
                    {
                        visited[j] = 1;
                        end = stations[j];
                    }
                }
                count++;
            }
        }
        cout << count << endl;
    }
}