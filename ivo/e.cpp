#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, k;
    cin >> n >> k;
    vector<long long int> set_numbers;
    vector<long long int> results;
    set<long long int> test;
    for (int i = 0; i < n; i++)
    {
        long long int number;
        cin >> number;
        set_numbers.push_back(number);
    }
    sort(set_numbers.begin(), set_numbers.end());

    for (long long int i = 0; i < (n - 1); i++)
    {
        long long int number = set_numbers[i + 1] - set_numbers[i];

        results.push_back(number);
        test.insert(number);
    }

    long long int score = 0;
    for (int i = 0; i < k; i++)
    {
        long long int index;
        if (test.size() == 1)
        {
            index = (n / 2) - 1;
        }
        else
        {
            index = distance(results.begin(), std::max_element(results.begin(), results.end()));
        }
        score += results[index];
        set_numbers.erase(set_numbers.begin() + index, set_numbers.begin() + index + 2);
        results.clear();
        test.clear();
        n -= 2;
        if (n <= 2)
            break;
        for (long long int j = 0; j < (n - 1); j++)
        {
            long long int number = set_numbers[j + 1] - set_numbers[j];
            results.push_back(number);
            test.insert(number);
        }
    }

    std::cout << score << '\n';
}
