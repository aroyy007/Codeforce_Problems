#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <map>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

const int MAXN = 100005;
const int LOG = 17;

#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]

int sum_d(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

void solve()
{
    ll n, c;
    cin >> n >> c;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll x = 1;

    for (ll i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= c)
        {
            x++;
        }
        else
        {
            x = 1;
        }
    }

    cout << x << endl;
}

int main()
{
    optimize();

    // ll t;
    // cin >> t;

    // for(ll tt = 1; tt <= t; tt++)
    // {
    solve();
    // }

    return 0;
}
