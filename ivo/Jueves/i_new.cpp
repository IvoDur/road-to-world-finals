#include <bits/stdc++.h>
using namespace std;

string s0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string s1 = "What are you doing while sending \"";
string s2 = "\"? Are you busy? Will you send \"";
string s3 = "\"?";
long long l0 = s0.length();
long long l1 = s1.length();
long long l2 = s2.length();
long long l3 = s3.length();

long long dp[100000];

long long count_chars(long long number)
{
    if (dp[number] != 0)
    {
        return dp[number];
    }
    if (number == 0)
    {
        return (l0);
    }
    long long answer = l1 + count_chars(number - 1) + l2 + count_chars(number - 1) + l3;
    dp[number] = answer;
    return (answer);
}

char verify_k(long long k, long long n)
{
    if (n == 0)
    {
        if (k > l0)
        {
            return ('.');
        }
        else
        {
            return (s0[k - 1]);
        }
    }
    else
    {
        if (k > l1)
        {
            k -= l1;

            if (k > count_chars(n - 1))
            {
                k -= count_chars(n - 1);

                if (k > l2)
                {
                    k -= l2;

                    if (k > count_chars(n - 1))
                    {
                        k -= count_chars(n - 1);

                        if (k > l3)
                        {
                            return ('.');
                        }
                        else
                        {
                            return (s3[k - 1]);
                        }
                    }
                    else
                    {
                        return (verify_k(k, n - 1));
                    }
                }
                else
                {
                    return (s2[k - 1]);
                }
            }
            else
            {
                return (verify_k(k, n - 1));
            }
        }
        else
        {
            return (s1[k - 1]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long q;
    cin >> q;
    memset(dp, 0, sizeof(dp));
    for (long long i = 0; i < q; i++)
    {
        long long n;
        long long k;
        cin >> n >> k;
        cout << verify_k(k, n);
        // l1 n l2 n l3
    }
    cout << '\n';
}