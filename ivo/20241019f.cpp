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
const double EPS = 1e-5;

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

bool sortbyCond(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}
int main()
{
    ll n;
    cin >> n;
    string teams[n];
    vector<pair<ll, ll>> scores;
    fori(i, n)
    {
        ll points = 0;
        ll sum = 0;
        string team;
        cin >> team;
        teams[i] = team;

        cin >> points;
        sum += points * 10;
        multiset<ll> trampoline;
        fori(j, 6)
        {
            ll exercise;
            cin >> exercise;
            trampoline.insert(exercise);
        }
        trampoline.erase(trampoline.begin());
        trampoline.erase(prev(trampoline.end()));
        sum += accumulate(trampoline.begin(), trampoline.end(), 0);
        scores.push_back({sum, i});
    }

    sort(scores.rbegin(), scores.rend(), sortbyCond);
    cout << teams[scores[0].second] << ' ' << scores[0].first << '\n';
    cout << teams[scores[1].second] << ' ' << scores[1].first << '\n';
    cout << teams[scores[2].second] << ' ' << scores[2].first << '\n';

    int medallists = 3;
    fora(i, 3, n - 1)
    {
        if (medallists == 1000)
        {
            break;
        }
        if (scores[i].first < scores[2].first)
        {
            break;
        }
        cout << teams[scores[i].second] << ' ' << scores[i].first << '\n';
        medallists++;
    }
}
