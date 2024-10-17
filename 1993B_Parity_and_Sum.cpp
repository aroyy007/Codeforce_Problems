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

void calc(vector<ll> &even, vector<ll> &odd)
{
    ll e1 = even.size();
    ll o1 = odd.size();
    ll l1 = odd.back();
    ll ans = 0;

    for (int i = 0; i < e1; ++i)
    {
        if (even[i] > l1)
        {
            cout << e1 + 1 << endl;
            return;
        }
        else
        {
            ans++;
            l1 += even[i];
        }
    }

    cout << ans << endl;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> even, odd;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2)
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }

    if (even.size() == 0 || odd.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    calc(even, odd);
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
