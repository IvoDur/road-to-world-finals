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

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

#define pb push_back

// g++ -std=c++11 -O2 -Wall test.cpp -o test
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int t1[(n / 2) + 1], t2[(n / 2) + 1];
    int indexes[n + 1] = {0};

    int o1[(n / 2) + 1], o2[(n / 2) + 1];

    fora(i, 1, n / 2) cin >> t1[i];

    fora(i, 1, n / 2) cin >> t2[i];

    bool first_one = true;
    int turn = 1;
    int min_index = 1;
    fori(i, n)
    {
        if (first_one)
        {
            int d = t1[turn];
            int count = 1;
            if (d >= min_index)
            {
                fora(i, min_index, n)
                {
                    if (indexes[i])
                        continue;
                    if (count == d)
                    {
                        indexes[i] = 1;
                        o1[turn] = i;
                        break;
                    }
                    count++;
                }
            }
            else
            {
                fora(i, 1, min_index)
                {
                    if (indexes[i])
                        continue;
                    if (count == d)
                    {
                        indexes[i] = 1;
                        o1[turn] = i;
                        break;
                    }
                    count++;
                }
            }
        }
        else
        {
            int d = t2[turn];
            int count = 1;
            fora(i, 1, n)
            {
                if (indexes[i])
                    continue;
                if (count == d)
                {
                    indexes[i] = 1;
                    o2[turn] = i;
                    break;
                }
                count++;
            }
            turn++;
        }
        first_one = !first_one;
    }

    fora(i, 1, (n / 2))
    {
        cout << o1[i] << " ";
    }
    cout << endl;

    fora(i, 1, (n / 2))
    {
        cout << o2[i] << " ";
    }
    cout << endl;
}
