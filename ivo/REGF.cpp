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

// g++ -std=c++11 -O2 -Wall test.cpp -o test
bool palindrome_check(ll n, ll b)
{
    vector<ll> result;
    vector<ll> inverse;
    ll digit;
    do
    {
        digit = n % b;
        result.push_back(digit);
        n /= b;
    } while (n > 0ll);

    inverse = result;
    reverse(inverse.begin(), inverse.end());

    return (result == inverse);
}

int main()
{
    ll n;
    cin >> n;
    set<ll> divisors;
    if (n == 2ll)
    {
        cout << '*' << '\n';
    }
    else
    {
        for (ll i = 2ll; i <= sqrt(n - 1); i++)
        {
            if (n / i == 0ll)
            {
                continue;
            }
            else
            {
                if (palindrome_check(n, i))
                {
                    cout << i << ' ';
                };
            }
        }
        for (ll d = (-1 + sqrt(1 + n)); d >= 1; d--)
        {
            if (n % d == 0)
            {
                cout << (n / d) - 1 << ' ';
            }
        }
    }
}
