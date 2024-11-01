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
const double EPS = 1e-9;
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

// g++ -std=c++11 -O2 -Wall test.cpp -o test
double center(double height, double total_height, double da, double dw)
{
    double air_center = (((total_height - height) / 2) + height);
    double water_center = (height / 2);
    double air_height = total_height - height;
    return ((da * (total_height - height)) * (((total_height - height) / 2) + height) + (dw * height) * (height / 2)) / ((da * (total_height - height)) + (dw * height));
}

int main()
{
    double h, r, da, dw;
    cin >> h >> r >> da >> dw;

    double int_min = 0;
    double old_height = INF;
    double old_i = 0;
    double cached_i = 0;
    double result = 0;
    fora(i, 1, h)
    {
        double new_height = center(i, h, da, dw);
        // cout << new_height << ' ';

        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            old_i = i;
        }
        else
        {
            break;
        }
    }
    for (double i = 0.1; i <= 0.9; i += 0.1)
    {
        double new_height = center(old_i + i, h, da, dw);
        // cout << new_height << ' ';
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    for (double i = 0.01; i <= 0.09; i += 0.01)
    {
        // cout << old_i + i << ' ';
        double new_height = center(old_i + i, h, da, dw);
        // cout << new_height << ' ';
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    // cout << old_i;
    for (double i = 0.001; i <= 0.009; i += 0.001)
    {
        double new_height = center(old_i + i, h, da, dw);
        cout << new_height;
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
            // cout << i << '    ';
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    // cout << old_i;
    for (double i = 0.0001; i <= 0.0009; i += 0.0001)
    {
        double new_height = center(old_i + i, h, da, dw);
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    for (double i = 0.00001; i <= 0.00009; i += 0.00001)
    {
        double new_height = center(old_i + i, h, da, dw);
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    for (double i = 0.000001; i <= 0.000009; i += 0.000001)
    {
        double new_height = center(old_i + i, h, da, dw);
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    for (double i = 0.0000001; i <= 0.0000009; i += 0.0000001)
    {
        double new_height = center(old_i + i, h, da, dw);
        if (new_height < old_height - EPS)
        {
            old_height = new_height;
            cached_i = i;
        }
        else
        {
            break;
        }
    }
    old_i += cached_i;
    cout << old_i;
}
