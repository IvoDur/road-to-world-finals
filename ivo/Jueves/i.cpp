#include <bits/stdc++.h>
using namespace std;

string s0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string s1 = "What are you doing while sending \"";
string s2 = "\"? Are you busy? Will you send \"";
string s3 = "\"?";
int l0 = s0.length();
int l1 = s1.length();
int l2 = s2.length();
int l3 = s3.length();
map<char, int> a = {
    {'0', l0},
    {'1', l1},
    {'2', l2},
    {'3', l3}};

map<char, string> b = {
    {'0', s0},
    {'1', s1},
    {'2', s2},
    {'3', s3}};

string dp[100000];
string make_string(int number)
{
    if (dp[number] != "")
    {
        return dp[number];
    }
    if (number == 0)
    {
        return ("0");
    }
    string answer = "1" + make_string(number - 1) + "2" + make_string(number - 1) + "3";
    dp[number] = answer;
    return (answer);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < q; i++)
    {
        bool flag = true;
        int n, k;
        cin >> n >> k;
        string answer = make_string(n);
        for (int j = 0; j < answer.length(); j++)
        {
            if (k - a[answer[j]] < 0)
            {
                std::cout << b[answer[j]][k - 1];
                flag = false;
                break;
            }
            else if (k == 0)
            {
                std::cout << b[answer[j]][b[answer[j]].length() - 1];
            }
            k -= a[answer[j]];
        }

        if (flag)
        {
            std::cout << '.';
        }
    }
    std::cout << '\n';
}
