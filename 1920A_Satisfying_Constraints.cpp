#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;
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
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll max1 = 1;
    ll min2 = 1e9;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
        {
            max1 = max(max1, b);
        }
        else if (a == 2)
        {
            min2 = min(min2, b);
        }
        else if (a == 3)
        {
            v.push_back(b);
        }
    }
    sort(v.begin(), v.end());
    ll sz = v.size();
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    int c = 0;
    ll ans = 0;
    if (min2 < max1 || ans < 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ans = min2 - max1 + 1;
        for (int i = 0; i < sz; i++)
        {
            if (v[i] >= max1 && v[i] <= min2)
            {
                ans--;
                //cout<<v[i]<<endl;
            }
        }
        cout << ans << endl;
    }

    // ll ans = min2 - max1 + 1 - c;
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
