#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vp;
typedef vector<long long int> vll;
typedef vector<char> vc;
typedef long double ld;

typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
typedef vector<long long int>::iterator vllit;

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 3;

#define _ % MOD
#define __ %= MOD

#define each(it, s) for (vit it = s.begin(); it != s.end(); ++it)
#define sortAsc(v) sort(v.begin(), v.end())
#define sortDesc(v) sort(v.begin(), v.end(), greater<auto>())
#define fill(a, v) memset(a, v, sizeof(a))

#define fori(i, n) for (int i = 0; i < (n); ++i)
#define fora(i, a, n) for (int i = a; i <= (n); ++i)
#define ford(i, a, n) for (int i = a; i >= (n); --i)
#define pq(x) priority_queue<x, std::vector<x>, compare>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

#define fi first
#define se second
#define mp make_pair
#define pb push_back

#define fbo find_by_order
#define ook order_of_key

set<int> factors_2(int min_value, int max_value)
{
    set<int> values;

    for (int i = 1; i * i <= min_value; i++)
    {
        if (min_value % i == 0 && max_value % i == 0)
        {
            values.insert(i);
            int pair = (min_value) / i;
            if (max_value % pair == 0)
            {
                values.insert(pair);
            }
        }
    }
    return values;
}
set<int> factors_3(int min_value, int min_value_2, int max_value)
{
    set<int> values;

    for (int i = 1; i * i <= min_value; i++)
    {
        if (min_value % i == 0 && max_value % i == 0 && min_value_2 % i == 0)
        {
            values.insert(i);
            int pair = (min_value) / i;
            if (max_value % pair == 0 && min_value_2 % i == 0)
            {
                values.insert(pair);
            }
        }
    }
    return values;
}

set<int> factors(int min_value, int max_value)
{
    set<int> values;

    for (int i = 1; i * i <= min_value; i++)
    {
        if ((min_value - 1) % i == 0 && (max_value - 1) % i == 0)
        {
            values.insert(i);
            int pair = (min_value - 1) / i;
            if ((min_value - 1) % pair == 0 && (max_value - 1) % pair == 0)
            {
                values.insert(pair);
            }
        }
        else if (min_value % i == 0 && (max_value - 2) % i == 0)
        {
            values.insert(i);
            int pair = (min_value) / i;
            if ((min_value) % pair == 0 && (max_value - 2) % pair == 0)
            {
                values.insert(pair);
            }
        }
        else if ((min_value - 2) % i == 0 && max_value % i == 0)
        {
            values.insert(i);
            int pair = (min_value - 2) / i;
            if ((max_value - 1) % pair == 0)
            {
                values.insert(pair);
            }
        }
    }
    if ((max_value - 2) % min_value == 0)
    {
        values.insert(min_value);
    }
    if ((max_value - 1) % (min_value - 1) == 0)
    {
        values.insert(min_value - 1);
    }
    if ((max_value) % (min_value - 2) == 0)
    {
        values.insert(min_value - 2);
    }
    return values;
}
// g++ -std=c++11 -O2 -Wall test.cpp -o test

int main()
{
    int t;
    cin >> t;
    fori(i, t)
    {
        set<int> a_values, aux1, aux2, aux3;
        int w, l, max_value, min_value;
        cin >> w >> l;
        min_value = min(w, l);
        max_value = max(w, l);
        aux1 = factors_2(min_value - 1, max_value - 1);
        for (auto a : aux1)
        {
            a_values.insert(a);
        }
        aux1 = factors_2(min_value, max_value - 2);
        for (auto a : aux1)
        {
            a_values.insert(a);
        }
        aux1 = factors_2(min_value - 2, max_value);
        for (auto a : aux1)
        {
            a_values.insert(a);
        }
        aux1 = factors_3(min_value - 2, min_value, max_value - 1);
        for (auto a : aux1)
        {
            a_values.insert(a);
        }
        aux1 = factors_3(min_value - 1, max_value, max_value - 2);
        for (auto a : aux1)
        {
            a_values.insert(a);
        }
        cout << a_values.size();
        for (auto number : a_values)
        {
            cout << " " << number;
        }
        cout << '\n';
    }
}
