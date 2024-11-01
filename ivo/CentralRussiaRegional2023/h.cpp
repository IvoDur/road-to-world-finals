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
int main()
{
    ll n, a1, k, p;
    cin >> n >> a1 >> k >> p;
    ll first, second, third, forth, fifth;
    first = 0;
    second = 0;
    third = 0;
    forth = 0;
    fifth = a1;
    fori(i, n - 1)
    {
        ll a_next = (a1 * k) % p;

        if (a_next >= first)
        {
            if (a_next >= second)
            {
                if (a_next >= third)
                {
                    if (a_next >= forth)
                    {
                        if (a_next >= fifth)
                        {
                            first = second;
                            second = third;
                            third = forth;
                            forth = fifth;
                            fifth = a_next;
                        }
                        else
                        {
                            first = second;
                            second = third;
                            third = forth;
                            forth = a_next;
                        }
                    }
                    else
                    {
                        first = second;
                        second = third;
                        third = a_next;
                    }
                }
                else
                {
                    first = second;
                    second = a_next;
                }
            }
            else
            {
                first = a_next;
            }
        }

        a1 = a_next;
    }
    std::cout << first << ' ' << second << ' ' << third << ' ' << forth << ' ' << fifth;
}
