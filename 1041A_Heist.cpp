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

int main()
{
    optimize();

    int n;
    cin >> n;
    vector<int> v(n);
    ain(v, n);

    sort(v.begin(), v.end());

    ll ans = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    ll s = v[0];
    ll l = v[n - 1];

    // cout<<s<<" "<<l<<endl;
    // for (int i = s; i <= l; i++)
    // {
    //     if (i == v[i])
    //     {
    //         ans++;
    //     }
    // }
    ans = (l - s + 1) - n;
    cout << ans << endl;
    return 0;
}
