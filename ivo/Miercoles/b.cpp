#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d, e;
    cin >> n >> d >> e;
    long long dollar_conversion = n / d;
    long long euro_conversion = n / e;

    long long resto = n;
    for (long long i = 0; i <= dollar_conversion; i++)
    {
        long long resto_dolar = n - i * d;
        long long euros_cambiar = resto_dolar / e - (resto_dolar / e) % 5;
        long long resto_total = resto_dolar - euros_cambiar * e;
        if (resto > resto_total)
        {
            resto = resto_total;
        }
    }
    for (long long j = 0; j <= euro_conversion; j += 5)
    {
        long long resto_euro = n - j * e;
        long long dollars_cambiar = resto_euro / d;
        long long resto_total = resto_euro - dollars_cambiar * d;
        if (resto > resto_total)
        {
            resto = resto_total;
        }
    }
    std::cout << resto << '\n';
    /*
    long long de = n;
    long long ed = n;

    long long dollar_euro = de - d * dollar_conversion;
    long long new_euro = dollar_euro / e;
    dollar_euro -= new_euro * e - (new_euro % 5) * e;

    long long euro_dollar = ed - (e * euro_conversion - euro_conversion % 5 * e);
    long long new_dollar = euro_dollar / d;
    euro_dollar -= new_dollar * d;

    float float_d = d;
    float float_e = e;

    float falta_euro = e * 5 - dollar_euro;
    float restar_dollars = std::ceil(falta_euro / float_d);
    long long dollar_euro_euro = dollar_euro + restar_dollars * d;
    long long dollar_euro_euro_con = dollar_euro_euro / e - dollar_euro_euro % 5;
    dollar_euro_euro -= dollar_euro_euro_con * e;

    float falta_dollar = d - euro_dollar;
    float restar_euros = std::ceil(falta_dollar / float_e);
    long long euro_dollar_dollar = euro_dollar + restar_euros * e;
    long long euro_dollar_dollar_con = euro_dollar_dollar / d;
    euro_dollar_dollar -= euro_dollar_dollar_con * d;

    vector<long long> restos = {dollar_euro,
                                dollar_euro_euro,
                                euro_dollar,
                                euro_dollar_dollar};
    std::cout << *min_element(restos.begin(), restos.end()) << '\n';
    */
}