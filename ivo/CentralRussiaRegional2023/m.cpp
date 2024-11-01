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
    ll n;
    cin >> n;
    ll students[n + 1];
    ll students_diss[n + 1];
    ll where_to_seat[n + 1] = {0};
    ll maximun_diss[n + 1] = {0};
    ll maximun_diss_student[n + 1] = {0};
    ll available[n + 1] = {0};

    ll wanted_seat;
    fora(i, 1, n)
    {
        cin >> wanted_seat;
        students[i] = wanted_seat;
    }

    ll diss;
    fora(i, 1, n)
    {
        cin >> diss;
        students_diss[i] = diss;
        wanted_seat = students[i];
        if (diss > maximun_diss[wanted_seat])
        {
            available[wanted_seat] = 1;
            maximun_diss[wanted_seat] = diss;
            where_to_seat[i] = wanted_seat;
            where_to_seat[maximun_diss_student[wanted_seat]] = 0;
            maximun_diss_student[wanted_seat] = i;
        }
    }

    ll acum = 0;
    ll last_seat_taken = 1;
    fora(i, 1, n)
    {
        if (where_to_seat[i] == 0)
        {
            fora(j, last_seat_taken, n)
            {
                if (available[j] == 0)
                {
                    available[j] = 1;
                    where_to_seat[i] = j;
                    last_seat_taken = j;
                    break;
                }
            }
            acum += students_diss[i];
        }
    }

    cout << acum << '\n';
    fora(i, 1, n)
    {
        cout << where_to_seat[i] << ' ';
    }
}
