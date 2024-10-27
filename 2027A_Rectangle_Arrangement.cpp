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
    ll n;
    cin >>
        n;
    vector<pair<int, int>> stamps(n);

    ll maxWidth = 0, maxHeight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> stamps[i].first >> stamps[i].second;
        
        maxWidth = max(maxWidth, static_cast<ll>(stamps[i].first));
        maxHeight = max(maxHeight, static_cast<ll>(stamps[i].second));
    }

    int perimeter = 2 * (maxWidth + maxHeight);

    cout << perimeter << endl;
}

int main()
{
    optimize();

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
