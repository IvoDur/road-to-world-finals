#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-9;
struct pto
{
    double x, y;
    pto(double x = 0, double y = 0) : x(x), y(y) {}
    pto operator+(pto a) { return pto(x + a.x, y + a.y); }
    pto operator-(pto a) { return pto(x - a.x, y - a.y); }
    pto operator+(double a) { return pto(x + a, y + a); }
    pto operator*(double a) { return pto(x * a, y * a); }
    pto operator/(double a) { return pto(x / a, y / a); }
    // dot product, producto interno:
    double operator*(pto a) { return x * a.x + y * a.y; }
    // module of the cross product or vectorial product:
    // if a is less than 180 clockwise from b, a^b>0
    double operator^(pto a) { return x * a.y - y * a.x; }
    // returns true if this is at the left side of line qr
    bool left(pto q, pto r) { return ((q - *this) ^ (r - *this)) > 0; }
    bool operator<(const pto &a) const { return x < a.x - EPS || (abs(x - a.x) < EPS && y < a.y - EPS); }
    bool operator==(pto a) { return abs(x - a.x) < EPS && abs(y - a.y) < EPS; }
    double norm() { return sqrt(x * x + y * y); }
    double norm_sq() { return x * x + y * y; }
};

struct ptoI
{
    int x, y;
    ptoI(int x = 0, int y = 0) : x(x), y(y) {}
    ptoI operator+(ptoI a) { return ptoI(x + a.x, y + a.y); }
    ptoI operator-(ptoI a) { return ptoI(x - a.x, y - a.y); }
    ptoI operator+(int a) { return ptoI(x + a, y + a); }
    ptoI operator*(int a) { return ptoI(x * a, y * a); }
    ptoI operator/(int a) { return ptoI(x / a, y / a); }
    // dot product, producto interno:
    int operator*(ptoI a) { return x * a.x + y * a.y; }
    // module of the cross product or vectorial product:
    // if a is less than 180 clockwise from b, a^b>0
    int operator^(ptoI a) { return x * a.y - y * a.x; }
    // returns true if this is at the left side of line qr
    bool left(ptoI q, ptoI r) { return ((q - *this) ^ (r - *this)) > 0; }
    bool operator<(const ptoI &a) const { return x < a.x - EPS || (abs(x - a.x) < EPS && y < a.y - EPS); }
    bool operator==(ptoI a) { return (x == a.x && y == a.y); }
    double norm() { return sqrt(x * x + y * y); }
    double norm_sq() { return x * x + y * y; }
};
double dist(pto a, pto b) { return (b - a).norm(); }
typedef pto vec;

double angle(ptoI a, ptoI o, ptoI b)
{
    ptoI oa = a - o, ob = b - o;
    return atan2(oa ^ ob, oa * ob);
}

ptoI RECO = {0, 0};
ptoI RECB = {0, 1};
ptoI RECA = {1, 0};
double rect = angle(RECA, RECO, RECB);

ptoI angleI(ptoI a, ptoI o, ptoI b)
{
    ptoI oa = a - o, ob = b - o;
    ptoI ans = {oa ^ ob,
                oa * ob};
    return ans;
}
// rotate p by theta rads CCW w.r.t. origin (0,0)
pto rotate(pto p, double theta)
{
    return pto(p.x * cos(theta) - p.y * sin(theta),
               p.x * sin(theta) + p.y * cos(theta));
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ptoI A, B, C;
    A = {x1, y1};
    B = {x2, y2};
    C = {x3, y3};
    ptoI points[] = {A, B, C};

    if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
    {
        cout << "RIGHT";
    }
    else
    {
        bool found = false;
        for (int i = -1; i < 2; i++)
        {
            A.x += i;
            if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
            {
                cout << "ALMOST";
                found = true;
                break;
            }
            A.x = x1;
            B.x += i;
            if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
            {
                cout << "ALMOST";
                found = true;
                break;
            }
            B.x = x2;
            C.x += i;
            if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
            {
                cout << "ALMOST";
                found = true;
                break;
            }
            C.x = x3;
        }
        if (!found)
        {
            for (int i = -1; i < 2; i++)
            {
                A.y += i;
                if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
                {
                    cout << "ALMOST";
                    found = true;
                    break;
                }
                A.y = y1;
                B.y += i;
                if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
                {
                    cout << "ALMOST";
                    found = true;
                    break;
                }
                B.y = y2;
                C.y += i;
                if (abs(abs(angle(C, A, B)) - rect) < EPS || abs(abs(angle(B, C, A)) - rect) < EPS || abs(abs(angle(A, B, C)) - rect) < EPS)
                {
                    cout << "ALMOST";
                    found = true;
                    break;
                }
                C.y = y3;
            }
        }
        if (!found)
        {
            cout << "NEITHER";
        }
    }
}