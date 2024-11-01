#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        long long elements[size];

        for (int j = 0; j < size; j++)
        {
            cin >> elements[j];
        }

        int counter = 0;
        int max_number = 0;
        int max_index = 0;
        long long sum = 0;
        for (int j = 0; j < size; j++)
        {
            if (elements[j] > max_number)
            {
                sum += max_number;
                max_number = elements[j];
            }
            else
            {
                sum += elements[j];
            }
            if (sum == max_number)
            {
                counter++;
            }
        }
        cout << counter << '\n';
    }
}
